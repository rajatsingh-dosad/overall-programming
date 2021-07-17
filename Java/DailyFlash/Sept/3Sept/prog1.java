
import java.io.*;

class PerfectNo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the number: ");
		int n = Integer.parseInt(br.readLine());
		
		int sum=0;
		for(int i=1;i<=n/2;i++) {

			if(n%i==0) {
				
				sum=sum+i;
			}
		}
		if(sum==n) {

			System.out.printf("%d is a perfect number\n",n);
		}
		else 
			System.out.printf("%d is not a perfect number\n",n);
	}

}


