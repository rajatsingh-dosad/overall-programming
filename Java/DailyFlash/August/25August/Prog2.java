

import java.io.*;

class SumDemo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int sum=0;
		int num=Integer.parseInt(br.readLine());
		int dup=num;

		while(num>=1) {

			sum=sum+num;
			num--;
		}
		System.out.println("The sum number upto "+dup+" : "+sum);
	}
}




