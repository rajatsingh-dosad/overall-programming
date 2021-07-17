
import java.io.*;

class SumOfNum {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.print("Enter the numbers: ");
		
		int sum = 0;

		while(true) {

			int num = Integer.parseInt(br.readLine());
			if(num>50)
				break;
			else
				sum =sum + num;
		}
		System.out.println("Sum = "+sum);
	}
}

		
