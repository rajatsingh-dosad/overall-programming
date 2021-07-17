

import java.io.*;

class SquareCube {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num1 = Integer.parseInt(br.readLine());
		int num2 = Integer.parseInt(br.readLine());
		
		int num1S = num1*num1;
		int num2S = num2*num2;
		int num1C = num1*num1*num1;
		int num2C = num2*num2*num2;

		System.out.println("Addition of "+num1C+" & "+num2C+" is "+(num1C+num2C));

		System.out.println("Subtraction of "+num1S+" & "+num2S+" is "+(num1S-num2S));

	}
}

