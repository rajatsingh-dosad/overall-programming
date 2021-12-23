
import java.util.*;

class PriorityQueueNormal {

    public static void main(String[] args) {
         
        PriorityQueue<Integer> pq = new PriorityQueue<>();

        pq.offer(25);
        pq.offer(8);
        pq.offer(5);
        pq.offer(35);
        pq.offer(28);
        pq.offer(15);

        System.out.println(pq);

        System.out.println(pq.poll());    //5
        System.out.println(pq.poll());    //8
        System.out.println(pq.poll());    //15
        System.out.println(pq.poll());    //25

        System.out.println(pq);
    }
    
}
