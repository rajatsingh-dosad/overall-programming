
import java.util.*;

class ArrayListMethods {

	public static void main(String[] args) {

		ArrayList al = new ArrayList();
		al.add("Biencaps");
		al.add("Apple");
		al.add("Amazon");
		al.add("Tesla");
		al.add("Biencaps");

		System.out.println(al);

		//add(index,object)
		al.add(2,"Oracle");

		System.out.println(al);

		//indexOf(object)
		System.out.println(al.indexOf("Apple"));

		//lastIndexOf(object)
		System.out.println(al.lastIndexOf("Biencaps"));

		//size()
		System.out.println(al.size());

		//remove(int) or remove(object)
		al.remove(3);
		al.remove("Biencaps");
		System.out.println(al);


		//clone()
		ArrayList al2 = (ArrayList)al.clone();
		System.out.println(al);
		System.out.println(al2);

		//clear()
		al.clear();
		System.out.println(al);
		System.out.println(al2);



	}
}
