
import java.io.*;

class Imaginary {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter number 1: ");
		System.out.println("Enter real part: ");
		int r1 = Integer.parseInt(br.readLine());
		
		System.out.println("Enter imaginary part: ");
		int i1 = Integer.parseInt(br.readLine());

		System.out.println("Enter number 2: ");
		System.out.println("Enter real part: ");
		int r2 = Integer.parseInt(br.readLine());
		
		System.out.println("Enter imaginary part: ");
		int i2 = Integer.parseInt(br.readLine());

		System.out.printf("The addition of %d+%di & %d+%di is %d+%di\n",r1,i1,r2,i2,r1+r2,i1+i2);
	}
}

