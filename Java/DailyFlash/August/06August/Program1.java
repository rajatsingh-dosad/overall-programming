import java.util.Scanner;

class Month {

	public static void main(String[] args) {
		int num;
		Scanner sc =new Scanner(System.in);

		System.out.print("Enter the month number: ");
		num = sc.nextInt();

		switch(num) {

			case 1: 
				System.out.println("Output-: January has 31 days.");
				break;
			case 2: 
				System.out.println("Output-: February has 29 days.");
				break;
			case 3: 
				System.out.println("Output-: March has 31 days.");
				break;
			case 4: 
				System.out.println("Output-: April has 30 days.");
				break;
			case 5: 
				System.out.println("Output-: May has 31 days.");
				break;
			case 6: 
				System.out.println("Output-: June has 30 days.");
				break;
			case 7: 
				System.out.println("Output-: July has 31 days.");
				break;
			case 8:
				System.out.println("Output-: August has 31 days.");
				break;
			case 9: 
				System.out.println("Output-: September has 30 days.");
				break;
			case 10: 
				System.out.println("Output-: October has 31 days.");
				break;
			case 11: 
				System.out.println("Output-: November has 30 days.");
				break;
			case 12: 
				System.out.println("Output-: December has 31 days.");
				break;
			default: 
				System.out.println("U entered a wrong month");
				break;
		}
	}
}
