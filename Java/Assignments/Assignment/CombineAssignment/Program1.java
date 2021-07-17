
import java.util.Scanner;

class LeapYear {

	public static void main(String[] args) {
		int year;
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a year: ");
		year=sc.nextInt();

		if((year%4==0) || (year%100!=0) && (year%4==0)) {

			System.out.println(year+" is a Leap Year.");
		}
		else {
			System.out.println(year+" is not a Leap Year.");
		}
	}
	
}



