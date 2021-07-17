
import java.util.*;

class Prog1 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");
		String s = sc.next();

		System.out.print("Enter the character you want to replace: ");
		char c1 = sc.next().charAt(0);
		
		System.out.print("Enter the replacing character: ");
		char c2 = sc.next().charAt(0);

		s = s.replace(c1,c2);

		System.out.println("OUTPUT: "+s);
	}
}
