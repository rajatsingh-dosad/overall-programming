
import java.util.*;

class ReverseString {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");
		String str = sc.next();

		char[] ch = new char[str.length()];

		for(int i=0;i<str.length();i++) {

			ch[i] = str.charAt(i);
		}
		
		System.out.println("OUTPUT:");
		System.out.print("String after reversal is: ");
		for(int i=ch.length-1;i>=0;i--) {

			System.out.print(ch[i]);
		}
		System.out.println();
	}
}

