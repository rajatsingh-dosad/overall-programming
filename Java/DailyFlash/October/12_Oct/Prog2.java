
import java.util.Scanner;

class Prog2 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the string1: ");
		String s1 = sc.nextLine();

		System.out.println("Enter the string2: ");
		String s2 = sc.nextLine();

		String str1 = s1;
		String str2 = new String(s2);

		System.out.println(str1+"\""+str2);
	}
}


