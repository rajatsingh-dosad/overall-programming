
import java.io.*;

class Factorial {

	public static void main(String[] args) throws IOException {

		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));

		int num = Integer.parseInt(br.readLine());
		
		int fac=1;
		int dup=num;

		while(num>0) {

			fac = fac * num;
			num--;
		}
		System.out.println("The Factorial of "+dup+" is : "+fac);
	}
}
