

import java.io.*;

class SwapNo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter two numbers: ");
		int num1= Integer.parseInt(br.readLine());
		int num2= Integer.parseInt(br.readLine());

		System.out.println("Before Swap: "+num1+" "+num2);

		int temp =0;
		temp = num2;
		num2 = num1;
		num1 = temp;
		
		System.out.println("After Swap: "+num1+" "+num2);
	}
}
