
import java.util.*;

class Prog3 {

	public static void main(String[] args) {

		Scanner sc =  new Scanner(System.in);

		System.out.print("Enter string ID: ");
		String idS = sc.next();

		System.out.print("Enter numerical ID: ");
		String idN = sc.next();

		System.out.println("\nYour email id is: ");
		System.out.println(idS+idN+"@gmail.com");
	}
}

