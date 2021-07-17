
import java.util.Scanner;

class factorial {

	public static void main(String[] args) {
		int num;
		Scanner sc =new Scanner(System.in);

		System.out.println("Enter the number: ");
		num=sc.nextInt();

		for(int i=1;i<=num; i++) {
			int fac=1;
			for(int j=1;j<=i;j++) {

				fac=fac*j;
			}
			System.out.println("Factorial of "+i+": "+fac);
		}
	}
}
