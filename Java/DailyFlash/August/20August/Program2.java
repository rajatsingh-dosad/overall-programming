
import java.util.Scanner;

class SimpleInterest {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		float principle_amt, rate, time, SI;

		System.out.print("Enter the principle_amt, rate of interest and time: ");
		principle_amt=sc.nextFloat();
		rate=sc.nextFloat();
		time=sc.nextFloat();

		SI=(principle_amt*rate*time)/100;

		System.out.println("Simple interest is "+SI);
	}
}


