
import java.util.Scanner;

class GreaterLessEqual {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a number: ");
		int num= sc.nextInt();

		if(num>0) {

			System.out.println("Enter number is greater than Zero");
		}
		else if(num==0) {

			System.out.println("Enter number is equal to Zero");
		}
		else {

			System.out.println("Enter number is less than Zero");
		}
	}
}

