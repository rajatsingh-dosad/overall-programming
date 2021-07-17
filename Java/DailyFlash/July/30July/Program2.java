
import java.util.Scanner;

class Language {

	public static void main(String[] args) {

		Scanner sc=new Scanner(System.in);
		
		System.out.print("Enter a character: ");
		char ch=sc.next().charAt(0);

		switch(ch) {

			case 'C':
			case 'c':
				System.out.println("Language : C");
				break;

			case 'j':
			case 'J':
				System.out.println("Language : Java");
				break;

			case 'P':
			case 'p':
				System.out.println("Language : python");
				break;

			case 'R':
			case 'r':
				System.out.println("Language : Ruby");
				break;

			case 'S':
			case 's':
				System.out.println("Language : Swift");
				break;
		}
	}
}
