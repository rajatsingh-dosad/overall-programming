
import java.io.*;

class Operation {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		int num1, num2, choice;

		System.out.print("Enter num1 and num2: ");
		num1=Integer.parseInt(br.readLine());
		num2=Integer.parseInt(br.readLine());
		
		System.out.println("\nEnter your choice.\n1)Addition\n2)Subtraction\n3)Division\n4)Multiplication\n");
		choice=Integer.parseInt(br.readLine());
		switch(choice) {

			case 1:
				System.out.println("Addition = "+(num1+num2));
				break;
			case 2:
				System.out.println("Subtraction = "+(num1-num2));
				break;
			case 3:
				System.out.println("Division = "+(num1*num2));
				break;
			case 4:
				System.out.println("Multiplication = "+(num1*num2));
				break;
			default:
				System.out.println("U entered a wrong choice!");
				break;
		}
	}
}
