
import java.util.*;

class Prog1 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the name: ");
		String name = sc.next();

		System.out.print("Enter the roll No: ");
		int roll = sc.nextInt();

		System.out.print("Enter the field of interest: ");
		String interest = sc.next();

		System.out.println("\n*************************Output**********************");

		System.out.println("Hey, my name is "+name+" and my roll number is "+roll+". My field of interest are "+interest+".");
	}
}
