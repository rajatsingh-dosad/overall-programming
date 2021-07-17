
import java.util.*;

class CarCompany {

	public static void main(String[] args) {
	
		SortedSet<String> s = new TreeSet<String>();

		s.add("BMW");	
		s.add("Honda");	
		s.add("Hyundaii");	
		s.add("Audi");	
		s.add("MG");	

		System.out.println(s);

		for(String obj : s) {

			System.out.println(obj);
		}
	}
}
