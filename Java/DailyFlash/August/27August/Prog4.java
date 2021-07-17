

import java.io.*;

class Calculator {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter first number: ");
		int num1 = Integer.parseInt(br.readLine());
		System.out.print("Enter second number: ");
		int num2 = Integer.parseInt(br.readLine());
		System.out.println("+)Addition\n-)Subtraction\n3)Multiplication\n/)Division\n");
		System.out.print("Enter the sign of operation: ");
		char ch = (char)br.read();

		switch(ch) {

			case '+':
				System.out.println("Addition of "+num1+" & "+num2+" is "+(num1+num2));
				break;
			case '-':
				System.out.println("Subtraction of "+num1+" & "+num2+" is "+(num1-num2));
				break;
			case '*':
				System.out.println("Multiplication of "+num1+" & "+num2+" is "+(num1*num2));
				break;
			case '/':
				System.out.println("Division of "+num1+" & "+num2+" is "+(num1/num2));
				break;
			default:
				System.out.println("U entered a wrong choice!");
				break;
		}

		
	}
}

