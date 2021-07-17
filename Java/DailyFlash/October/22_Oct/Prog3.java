
import java.util.*;

class Prog3 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");
		String s = sc.next();

		System.out.print("Enter the character: ");
		char c = sc.next().charAt(0);

		System.out.println("First Occurence: "+s.indexOf(c));
		System.out.println("Last Occurence: "+s.lastIndexOf(c));
	}
}
		
