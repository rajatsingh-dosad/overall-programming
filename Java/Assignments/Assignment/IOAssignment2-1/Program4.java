

import java.io.*;

class SquareCube {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		int start, end;

		System.out.print("Enter the starting and ending number: ");
		start = Integer.parseInt(br.readLine());
		end = Integer.parseInt(br.readLine());

		for(int i=start; i<=end; i++) {
			
			System.out.print(i*i+" ");
		}
		System.out.println();

		for(int i=start; i<=end; i++) {
			
			System.out.print(i*i*i+" ");
		}
		System.out.println();
	}
}
