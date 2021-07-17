
import java.io.*;

class Prog1 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Enter input type :\n 1)Integer\n 2)String");
		int choice= Integer.parseInt(br.readLine());

		switch(choice) {

			case 1: 
				System.out.println("Enter your input: ");
				int num = Integer.parseInt(br.readLine());
				System.out.printf("%d is a integer.\n",num);
				break;
			
			case 2: 
				System.out.println("Enter your input: ");
				String s = br.readLine();
				System.out.printf("%s is a string.\n",s);
				break;

			default: 
				System.out.println("You entered a wrong choice!");
				break;
		}
	}
}
