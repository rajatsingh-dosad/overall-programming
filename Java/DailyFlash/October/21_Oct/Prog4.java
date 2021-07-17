
import java.util.*;

class Prog4 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string1: ");
		String s1 = sc.next();

		System.out.print("Enter the string2: ");
		String s2 = sc.next();

		if(s1.equals(s2))
			System.out.println("Both string are equal");
		else
			System.out.println("Both string are not equal");
	}
}
