import java .util.Scanner;

class Eligible {

	public static void main(String[] args) {
		int year,marks;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Student Year: ");
		year=sc.nextInt();
	
		System.out.print("Student Marks: ");
		marks=sc.nextInt();

		switch(year) {

			case 3: 	
				{	
					switch(marks/10) {
						
						case 8:
							System.out.println("Student is eligible for Educational scholarship.");
							break;
						case 9:
							System.out.println("Student is eligible for Educational scholarship.");
							break;
						case 10:
							System.out.println("Student is eligible for Educational scholarship.");
							break;
						default:
							System.out.println("Student is not eligible for Educational scholarship.");
							break;

					}
			}
			break;
			
			default:
				System.out.println("Student not eligible for Education scholarship.");
				break;
		}
	}
}





		
