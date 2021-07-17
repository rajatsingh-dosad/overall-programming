
import java.util.*;

class Prog3 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the string: ");
		String s = sc.next();

		if(s.length()>5)
			System.out.println(s);
		else
			System.out.println("String is less than 5");
	}
}
		
