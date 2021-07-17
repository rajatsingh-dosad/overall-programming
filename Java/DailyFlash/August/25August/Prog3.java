

import java.io.*;

class EvenOddDemo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num=Integer.parseInt(br.readLine());

		if(num%2==0)
			System.out.println(num+" is a even number");
		else
			System.out.println(num+" is a odd number");
	}
}



