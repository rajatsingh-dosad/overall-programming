
import java.util.*;

class Prog3 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");
		StringBuffer sb = new StringBuffer(sc.next());

		sb.insert(8,"Rajat");
		System.out.println("String after inserting is: "+sb);

		sb.reverse();
		System.out.println("String after reversing is: "+sb);
		sb.reverse();
		System.out.println("String after reversing again is: "+sb);

		System.out.println("String after deleting string from index 2 to 6: "+sb.delete(2,7));

		System.out.println("Charcter at index 4 is: "+sb.charAt(4));

		System.out.println("Substring of string having index 0 to 3 is: "+sb.substring(0,4));
	}
}


