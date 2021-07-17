
import java.util.*;

class HashSetDemo {

	public static void main(String[] args) {

		HashSet h = new HashSet();
		h.add("Virat");
		h.add("Dhoni");
		h.add("Rohit");
		h.add("Rishab");
		h.add("Hardik");


		Iterator itr = h.iterator();
		
		while(itr.hasNext()) {

			System.out.println(itr.next());
		}

		//contains()
		System.out.println(h.contains("Virat"));

		//size()
		System.out.println(h.size());
	
		//remove
		h.remove("Rishab");
		System.out.println(h);

		//clear()
		h.clear();
		System.out.println(h);
	}
}
