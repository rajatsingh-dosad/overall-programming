
import java.util.Scanner;

class Triangle {

	public static void main(String[] args) {

	Scanner sc = new Scanner(System.in);
	int ang1, ang2, ang3;

	System.out.print("Enter the three angle of a triangle: ");

	ang1= sc.nextInt();
	ang2= sc.nextInt();
	ang3= sc.nextInt();

	if(ang1+ang2+ang3==180)
		System.out.println("The triangle with angle "+ang1+", "+ang2+" & "+ang3+" is a valid one");
	else
		System.out.println("The triangle with angle "+ang1+", "+ang2+" & "+ang3+" is not a valid one");
	}
}

