
import java.util.Scanner;

class ReverseDivisible {

	public static void main(String[] args) {
		int val=0;
		Scanner sc =new Scanner(System.in);

		System.out.print("Enter the value: ");
		val=sc.nextInt();
		
		System.out.print("Reverse order ");

		for(int i=val; i>0; i--) {

			System.out.print(i+",");
		}

		System.out.println();
		System.out.print("Divisible by 5 is ");
		for(int i=val; i>0; i--) {

			if(i%5==0)

				System.out.print(i+",");
		}
		System.out.println();
	}
}
