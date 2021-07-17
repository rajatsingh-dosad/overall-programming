
import java.util.*;

class SubstringDemo {

	public static void main(String[] args ) {

		Scanner sc = new Scanner(System.in);	

		System.out.print("Enter the string1: ");
		String s1 = sc.next();
		
		System.out.print("Enter the string2: ");
		String s2 = sc.next();

		if(s1.contains(s2))
			System.out.println(s2+" is a substring of "+s1);
		else
			System.out.println(s2+" is not a substring of "+s1);
	}
}

