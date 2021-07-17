
import java.util.*;

class Prog4 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the first name: ");
		String fname = sc.next();

		System.out.print("Enter the last name: ");
		String lname = sc.next();

		System.out.println("OUTPUT: "+fname.toUpperCase()+" "+lname.toLowerCase());
	}
}

