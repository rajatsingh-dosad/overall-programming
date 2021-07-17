

import java.io.*;

class Operation {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		int num1 = Integer.parseInt(br.readLine());
		int num2 = Integer.parseInt(br.readLine());

		System.out.println("Addition of "+num1+" and "+num2+" is: "+(num1+num2)); 
		System.out.println("Subtraction of "+num1+" and "+num2+" is: "+(num1-num2)); 
		System.out.println("Multiplication of "+num1+" and "+num2+" is: "+num1*num2); 
		System.out.println("Division of "+num1+" and "+num2+" is: "+(float)num1/num2); 
	}
}
