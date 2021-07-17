
import java.util.*;

class Prog5 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");
		String sb = new String(sc.nextLine());
		
		System.out.print("Enter the Sub string: ");
		String sub = new String(sc.next());

		if(sb.contains(sub))
			System.out.println("OUTPUT:- Last Occurence Index = "+sb.lastIndexOf(sub));
		else
			System.out.println("Substring not present.");
	}
}


