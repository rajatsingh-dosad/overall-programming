
import java.util.*;

class DequeDemo {

	public static void main(String[] args) {

		Deque<String> dq = new ArrayDeque<>();

		//add
		dq.add("C");

		//addFirst
		dq.addFirst("CPP");

		//addLast
		dq.addLast("Java");

		//push
		dq.push("Flutter");	//pushes at first

		//offerFirst
		dq.offerFirst("Python");	//adds at first

		//offerLast
		dq.offerLast("Javascript");

		System.out.println(dq);
/*	
		
		//poll
		System.out.println(dq.poll());

		//pollFirst
		System.out.println(dq.pollFirst());
		
		//pollLast
		System.out.println(dq.pollLast());
		
		System.out.println(dq);
	
		//remove()
		System.out.println(dq.remove());

		//removeFirst
		System.out.println(dq.removeFirst());
		
		//removeLast
		System.out.println(dq.removeLast());

		System.out.println(dq);

*/	
		//peek()	
		System.out.println(dq.peek());	// only returns doesn't remove
/*
		//peekFirst()
		System.out.println(dq.peekFirst());

		//peekLast()
		System.out.println(dq.peekLast());

		System.out.println(dq);


		//iterator
		Iterator itr = dq.iterator();

		while(itr.hasNext()) {

			System.out.println(itr.next());
		}

		System.out.println("***************");

		//descendingIterator
		Iterator itr1 = dq.descendingIterator();

		while(itr1.hasNext()) {

			System.out.println(itr1.next());
		}
*/
	}
}
