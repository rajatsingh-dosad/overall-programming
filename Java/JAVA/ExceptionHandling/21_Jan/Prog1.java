
import java.io.*;

class IOExceptionDemo  {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the input: ");
		String s = br.readLine();
	}
}
