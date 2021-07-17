

import java.util.Scanner;

class Rto {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter RTO code among (AP, MH, GJ, BR, TN): ");
		String s=sc.nextLine();

		switch(s) {

			case "AP":
				System.out.println("State name : Andra-Pradesh");
				break;
			case "MH":
				System.out.println("State name : Maharashtra");
				break;
			case "GJ":
				System.out.println("State name : Gujarat");
				break;
			case "BR":
				System.out.println("State name : Bihar");
				break;
			case "TN":
				System.out.println("State name : Tamil-Nadu");
				break;
			default:
				System.out.println("U entered something else plz check!");
				break;
		}
	}
}
