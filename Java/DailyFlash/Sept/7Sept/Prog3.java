
import java.io.*;

class QuotientRem {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n1 = Integer.parseInt(br.readLine());
		int n2= Integer.parseInt(br.readLine());

		System.out.println("Quotient: "+n1/n2);
		System.out.println("Remainder: "+n1%n2);
	}
}
