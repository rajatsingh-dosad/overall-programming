

import java.io.*;

class Factorial {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the starting number: ");
		int s = Integer.parseInt(br.readLine() );

		System.out.print("Enter the ending number: ");
		int e = Integer.parseInt(br.readLine() );

		for(int i=s;i<=e;i++) {
			int fac=1;
			int num = i;
			while(num>0) {

				fac = fac * num;
				num--;
			}
			System.out.println("Factorial of "+i+" = "+fac);
		}
	}
}



