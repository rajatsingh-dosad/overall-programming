
import java.util.*;

class Prog2 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");
		StringBuffer sb = new StringBuffer(sc.next());

		System.out.print("Enter the index: ");
		int index = sc.nextInt();
		
		if(index > sb.length()-1)
			System.out.println("INVALID INDEX");
		else {
			char s = sb.charAt(index);
			sb.deleteCharAt(index);
			if(s>='A' && s<='Z')
				sb.insert(index,(char)(s+32));
			if(s>='a' && s<='z')
				sb.insert(index,(char)(s-32));
			System.out.println("OUTPUT:- String = "+sb);
		}

	}
}
