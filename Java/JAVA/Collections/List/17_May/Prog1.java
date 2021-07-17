
import java.util.*;

class Prog1 {

	public static void main(String[] args) {
		
		ArrayList al = new ArrayList();

		al.add("shashi");
		al.add("Core2Web");
		al.add("shashi");
		al.add("Badhe");

		System.out.println(al);

		ArrayList al2 = new ArrayList();

		al2.add("Rajat");
		al2.addAll(al);

		System.out.println(al2);


	

	 }
}
