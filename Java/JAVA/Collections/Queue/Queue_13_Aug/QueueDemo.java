
// Methods of queue interface

import java.util.*;

class PresidentUS {

    public static void main(String[] args) {

        Queue<String> q = new LinkedList<>();

        q.add("Bill Clinton");
        q.add("George Bush");
        q.add("Barak Obama");
        q.add("Donald Trump");

        System.out.println(q);

        //offer
        //Both add and offer are used to insert elements but the difference between them is that offer() will return false if it fails to insert the element on a size restricted Queue, whereas add() will throw an IllegalStateException .
        q.offer("Joe Biden");         

        System.out.println(q);

        //peek
        System.out.println(q.peek());
        System.out.println(q);

        //element
        System.out.println(q.element());
        System.out.println(q);

        /*
         The element and peek methods return, but do not remove, the head of the queue. They differ from one another in precisely the same fashion as remove and poll : if the queue is empty, element throws NoSuchElementException while peek returns false 
        */

        //poll
        System.out.println(q.poll());
        System.out.println(q);

        //remove
        System.out.println(q.remove());
        System.out.println(q);

         /*Poll() - It will give the head element of the queue and will remove the head element from queue. If queue is empty then it will return null. Remove() - It will give the head element of the queue and will remove the head element from queue. If queue is empty then it will throw an Exception.
        */
        

    }   
}
