
import java.util.*;

class Password {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the string: ") ;
		String s = sc.next();
		
		int digit = 0;
		int symbol = 0;
		if(s.length()<8) {
			System.out.println("Your password is not valid. It has characters less than 8.");
		}
		else {	
			for(int i=0;i<s.length();i++) {

				if(s.charAt(i)>=48 && s.charAt(i)<=57)
					digit++;

				else if((s.charAt(i)>=65 && s.charAt(i)<=90) || (s.charAt(i)>=97 && s.charAt(i)<=122))
					continue;

				else
					symbol++;
			}
			if(digit==0 || symbol==0)
				System.out.println("Password is not valid");
			else
				System.out.println("Password is valid");
		}
	}
}

			


