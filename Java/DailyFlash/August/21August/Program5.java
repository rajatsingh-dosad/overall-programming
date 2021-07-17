
import java.io.*;

class Ascii {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		char ch;

		System.out.print("Enter the character: ");
		ch = (char) br.read();

		System.out.println("Ascii Value of "+ch+" is "+(int)ch);
	}
}
