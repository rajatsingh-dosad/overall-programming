
import java.util.*;

class LengthOfString {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");
		String str = sc.next();

		char[] ch = new char[str.length()];
		int length = 0;
		for(int i=0;i<str.length();i++) {

			ch[i] = str.charAt(i);
			length++;
		}
		
		System.out.println("OUTPUT:");
		System.out.println("Length of String is: "+length);
		
	}
}

