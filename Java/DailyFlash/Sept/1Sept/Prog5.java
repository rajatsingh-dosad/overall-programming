

import java.io.*;

class MaxNo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the two number: ");
		int num1 = Integer.parseInt(br.readLine());
		int num2 = Integer.parseInt(br.readLine());

		int max = num1>num2 ? num1 : num2;

		System.out.println("The Maximum number amongst "+num1+" & "+num2+" is "+max);
	
	
	}
}
