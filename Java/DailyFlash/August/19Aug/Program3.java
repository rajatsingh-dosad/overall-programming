
import java.util.Scanner;

class Month {

	public static void main(String[] args) {
	
	Scanner sc = new Scanner(System.in);
	int month;

	System.out.print("Enter a number from 1 to 12: ");
	month = sc.nextInt();

	switch(month) {

		case 1:
			System.out.print("January is a 31 days month.\n");
			break;
		case 2:
			System.out.print("February is a 29 days month.\n");
			break;
		case 3:
			System.out.print("March is a 30 days month.\n");
			break;
		case 4:
			System.out.print("April is a 30 days month.\n");
			break;
		case 5:
			System.out.print("May is a 31 days month.\n");
			break;
		case 6:
			System.out.print("June is a 30 days month.\n");
			break;
		case 7:
			System.out.print("July is a 31 days month.\n");
			break;
		case 8:
			System.out.print("August is a 31 days month.\n");
			break;
		case 9:
			System.out.print("September is a 30 days month.\n");
			break;
		case 10:
			System.out.print("October is a 31 days month.\n");
			break;
		case 11:
			System.out.print("November is a 30 days month.\n");
			break;
		case 12:
			System.out.print("December is a 31 days month.\n");
			break;
		default:
			System.out.print("U eneterd something else!\n");
			break;
	}
	}
}
