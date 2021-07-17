

import java.io.*;

class MulDiv {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num1 = Integer.parseInt(br.readLine());
		int num2 = Integer.parseInt(br.readLine());

		System.out.println("Multiplication is "+(num1*num2));

		int div = num1>num2 ? num1/num2 : num2/num1;

		System.out.println("Subtraction is "+div);
	}
}

