
import java.util.*;

class Palindrome {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");
		String s = sc.next();
		String palindrome="";
		for(int i=s.length()-1;i>=0;i--) {

			palindrome = palindrome+s.charAt(i);
		}

		if(s.equals(palindrome))
			System.out.println("String "+s+" is a palindome");
		else
			System.out.println("String "+s+" is not a palindome");
	}
}

		


