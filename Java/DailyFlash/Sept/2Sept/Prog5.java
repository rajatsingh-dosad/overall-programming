

import java.io.*;

class MaxNo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the three numbers: ");
		int n1 = Integer.parseInt(br.readLine());
		int n2 = Integer.parseInt(br.readLine());
		int n3 = Integer.parseInt(br.readLine());

		int max = ((n1>n2) ? ((n1>n3) ? n1 : n3) : ((n2>n3) ? n2 : n3));

		System.out.printf("The maximum number amongst %d, %d and %d is %d\n",n1,n2,n3,max);
	}
}
