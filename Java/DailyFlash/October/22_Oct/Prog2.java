
import java.io.*;

class Prog2 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the string1: ");
		String s1 = br.readLine();
		
		System.out.print("Enter the string2: ");
		String s2 = br.readLine();

		if(s1.startsWith(s2))
			System.out.println("OUTPUT: Yes");
		else
			System.out.println("OUTPUT: NO");
	}
}
