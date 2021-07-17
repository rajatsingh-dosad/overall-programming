
import java.util.*;

class Prog3 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string1: ");
		StringBuilder sb1 = new StringBuilder(sc.next());
		
		System.out.print("Enter the string2: ");
		StringBuilder sb2 = new StringBuilder(sc.next());

		StringBuilder sb3 = new StringBuilder();
		
		for(int i= 0;i<sb2.length();i++) {
			
			if(i<sb1.length())
				sb3.append(sb1.charAt(i));
			if(i<sb2.length())
				sb3.append(sb2.charAt(i));
					
		}
		System.out.println("OUTPUT:- Result =\n"+sb3);
	}
}
