

import java.util.*;

class ToggleString {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the String: ");
		String s = sc.next();
		
		char ch;
		System.out.println("\nString after toggling: ");
		for(int i=0;i<s.length();i++) {
			
			ch = s.charAt(i);
			if(ch>='A' && ch<='Z')
				System.out.print((char)(ch+32))	;
			if(ch>='a' && ch<='z')
				System.out.print((char)(ch-32))	;

		}
		System.out.println();
	}
}


