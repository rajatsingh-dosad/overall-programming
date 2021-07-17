
import java.util.*;

class Prog1 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the string: ");
		StringBuffer sb = new StringBuffer(sc.next());

		sb.setLength(5);

		System.out.println("\n5 character of the string are: "+sb);
	}
}
