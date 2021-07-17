

import java.io.*;

class SquareCube {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the number: ");
		int num= Integer.parseInt(br.readLine());

		for(int i=1; i<=num; i++) {

			if(i%2==0)
				System.out.println("Cube of "+i+": "+(i*i*i)+" and Square of "+i+": "+(i*i));
		}
	
	}
}
