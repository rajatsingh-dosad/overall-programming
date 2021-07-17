
import java.util.Scanner;

class Weekday {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
	
		int num;

		System.out.print("Enter a number between 0 to 6: ");
		num=sc.nextInt();

		switch(num) {

			case 0:
				System.out.println("Monday");
				break;
			case 1:
				System.out.println("Tuesday");
				break;
			case 2:
				System.out.println("Wednesday");
				break;
			case 3:
				System.out.println("Thursday");
				break;
			case 4:
				System.out.println("Friday");
				break;
			case 5:
				System.out.println("Saturday");
				break;
			case 6:
				System.out.println("Sunday");
				break;
			default:
				System.out.println("U enetered number other than 0 to 6!");
				break;
		}
	}
}
