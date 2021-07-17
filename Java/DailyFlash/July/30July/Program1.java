
import java.util.*;

class Operation {

	public static void main(String[] args) {

		Scanner sc=new Scanner(System.in);
		
		System.out.print("Enter first number- ");
		int a= sc.nextInt();
		
		System.out.print("Enter Second number- ");
		int b= sc.nextInt();

		System.out.print("Enter the operator among (+, -, *, /, %) :     ");
		char operator = sc.next().charAt(0);

		switch(operator) {

			case '+':
				System.out.println(a+b);
				break;
			case '-':
				System.out.println(a-b);
				break;
			case '*':
				System.out.println(a*b);
				break;
			case '/':
				System.out.println(a/b);
				break;
			case '%':
				System.out.println(a%b);
				break;
			default:
				System.out.println("U entered something else!!! ");
				break;
		}
	}
}
