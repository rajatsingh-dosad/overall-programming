
import java.io.*;

class Prog5 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num = Integer.parseInt(br.readLine());

		for(int i=2; i<=num/2; i++) {

			if(num%i==0) {

				System.out.print(i+" ");
			}
		}
				
		System.out.println();
	}
}
