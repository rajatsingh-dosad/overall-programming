
import java.io.*;

class Prog3 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int year = Integer.parseInt(br.readLine());

		if((year%4==0 && year%100!=0) || year%400==0) {

			System.out.println(year+" is a Leap year.");
		}
		else
			System.out.println(year+" is not a Leap year.");
	}
}




