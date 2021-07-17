
import java.util.*;

class Prog4 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");
		StringBuffer s = new StringBuffer(sc.nextLine());
		StringBuffer sb = new StringBuffer();
		
		char ch;
		for(int i=0;i<s.length();i++) {
			
			ch = s.charAt(i);
			
			if(ch!=' ')
				sb.append(ch);
				
		}
		System.out.println("String after removing white spaces is: "+sb);
	}
}
