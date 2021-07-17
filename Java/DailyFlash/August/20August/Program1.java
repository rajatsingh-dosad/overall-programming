
import java.util.Scanner;
import java.lang.Math.*;
class Pythagoras {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int side1, side2, hyp, s;

		System.out.print("Enter the side1, side2 and hypotenuse of triangle: ");

		side1=sc.nextInt();
		side2=sc.nextInt();
		hyp=sc.nextInt();

		s=side1*side1+ side2*side2;

		if(Math.sqrt(s) ==hyp)
			System.out.println("Triangle satisfies the Pythagorean Theorem");
		else
			System.out.println("Triangle does not satisfies the Pythagorean Theorem");
	}
}



