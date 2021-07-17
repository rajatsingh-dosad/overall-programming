
import java.io.*;

class InputDemo {

	public static void main(String[] args) throws IOException {

		BufferedReader brOne = new BufferedReader(new InputStreamReader(System.in));
		BufferedReader brTwo = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.print("Enter name: ");
		String name = brOne.readLine();
		System.out.print("Enter surname: ");
		String surname = brTwo.readLine();

		System.out.println("Output: "+name+" "+surname);

		brOne.close();
		brTwo.close();
	}
}
