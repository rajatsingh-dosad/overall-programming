
import java.util.*;

class Prog5 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string1: ");
		StringBuffer sb1 = new StringBuffer(sc.next());
		
		System.out.print("Enter the string2: ");
		StringBuffer sb2 = new StringBuffer(sc.next());

		sb1.append(sb2);

		System.out.println(sb1);
	}
}
