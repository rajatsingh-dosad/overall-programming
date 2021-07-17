
import java.io.*;

class Prog5 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the starting and ending point of the series: ");
		int start = Integer.parseInt(br.readLine());
		int end = Integer.parseInt(br.readLine());

		for(int i=start;i<=end;i++) {
			int fac=1;
			int tmp =i;
			while(tmp>0) {

				fac = fac * tmp;
				tmp--;
			}
			System.out.printf("Factorial of %d = %d\n",i,fac);
		}
	}
}


