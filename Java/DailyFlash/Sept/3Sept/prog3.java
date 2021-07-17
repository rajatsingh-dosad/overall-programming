
import java.io.*;

class Voltage {

	public static void main(String[] args) throws IOException {

		BufferedReader br =  new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the value of current: ");
		int i = Integer.parseInt(br.readLine());

		System.out.print("Enter the value of reasistance: ");
		int r = Integer.parseInt(br.readLine());

		int v = i* r;

		System.out.println("Voltage v = "+v);
	}
}

