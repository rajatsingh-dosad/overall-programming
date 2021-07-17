
import java.io.*;

class PrimeNo {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		int start= Integer.parseInt(br.readLine());
		int end= Integer.parseInt(br.readLine());

		int total=0;
		for(int i=start; i<=end; i++) {
			int count=0;
			for(int j=1; j<=i; j++) {

				if(i%j==0)
					count++;
			}
			if(count==2) {
				System.out.print(i+" ");
				total++;
			}
		}
		System.out.println();
		if(total==0) {
			System.out.println("The count is: "+total);
			System.out.println("No prime numbers to display");
		}
		else
			System.out.println("The count is: "+total);

	}
}

