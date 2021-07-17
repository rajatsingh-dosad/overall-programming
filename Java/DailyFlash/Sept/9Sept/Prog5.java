

import java.io.*;

class GCD {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n1 = Integer.parseInt(br.readLine() );
		int n2 = Integer.parseInt(br.readLine() );
		int gcd = 1;

		for(int i = 1;i<=n1 && i<=n2;i++) {

			if(n1%i==0 && n2%i==0)
				gcd=i;
		}
		System.out.println("The GCD of "+n1+" and "+n2+" is "+gcd);
	}
}
