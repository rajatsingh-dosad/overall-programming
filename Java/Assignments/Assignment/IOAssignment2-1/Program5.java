

import java.io.*;

class Divisible1 {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br =new BufferedReader(isr);

		int num;

		System.out.print("Enter a number: ");
		num =Integer.parseInt(br.readLine());

		if(num%5==0 && num%10==0)
			System.out.println(num+" is divisible by both 5 and 10.");
		
		else
			System.out.println(num+" is not divisible by 5 and 10.");


	}
}

