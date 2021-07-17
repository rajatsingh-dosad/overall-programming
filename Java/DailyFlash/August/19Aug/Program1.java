
import java.util.Scanner;
class Character {

	public static void main(String[] args) {
	
		Scanner sc =new Scanner(System.in);
		
		char ch;
		System.out.println("Enter a character: ");
		ch=sc.nextLine().charAt(0);
	
		if(ch>='A' && ch<='Z')
			System.out.println("Letter "+ch+" is in Uppercase.");
		else if(ch>='a' && ch<='z')
			System.out.println("Letter "+ch+" is in Lowercase.");
		else
			System.out.println("U enetered a wrong char!");
	}
}

