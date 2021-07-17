
import java.util.*;

class LinkedListMethods {

	public static void main(String[] args) {

		LinkedList ll = new LinkedList();

		ll.add("C");
		ll.add("Python");
		ll.add("Java");
		ll.add("CPP");
		ll.add("Java");

		System.out.println(ll);

		//add(indexm,object)
		ll.add(2,"Networking");

		System.out.println(ll);

		//addFirst(object);
		ll.addFirst("React");
		System.out.println(ll);
		
		//addLast(object);
		ll.addLast("Js");
		System.out.println(ll);

		//removeFirst()
		ll.removeFirst();
		System.out.println(ll);
		
		//removeLast()
		ll.removeLast();
		System.out.println(ll);

		//indexOf(object)
		System.out.println(ll.indexOf("Java"));

		//set(index,object)
		ll.set(4,"Ruby");

		System.out.println(ll);
	}
}
