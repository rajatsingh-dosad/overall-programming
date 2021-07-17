
import java.util.*;

class Numbers {
	
	public static void main(String[] args) {

		SortedSet s = new TreeSet();

		s.add(10);
		s.add(25);
		s.add(8);
		s.add(32);
		s.add(20);

		SortedSet s1 = new TreeSet();
		s1.add("Rajat");
		s1.add("Raj");
		s1.add("Rat");

		System.out.println(s);
		System.out.println(s1);
	}
}
