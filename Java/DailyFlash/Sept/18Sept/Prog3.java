

import java.io.*;

class Prog3 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the starting and ending number of the series: ");
		int start = Integer.parseInt(br.readLine());
		int end = Integer.parseInt(br.readLine());

		System.out.print("Enter the number you want to increase by: ");
	       	int num = Integer.parseInt(br.readLine());

		for(int i=start;i<=end;i+=4) {

			System.out.print(i+" ");
			
		}
		System.out.println();

	}
}


