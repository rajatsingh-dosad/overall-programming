

import java.io.*;

class SumAvgDemo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int sum=0;
		for(int i=1; i<=10; i++) {
		int n1=Integer.parseInt(br.readLine());
		sum=sum+n1;
		}
		
		System.out.println("Sum of 10 entered number is : "+sum);
		System.out.println("Average of 10 entered number is : "+(float)sum/10);


	}
}



