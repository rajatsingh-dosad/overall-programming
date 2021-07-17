
import java.util.*;

class Prog1 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the string: ");		
		StringBuffer s = new StringBuffer(sc.next());				//Core2Web
		
		System.out.print("\nEnter a new string: ");
		s.append(sc.next());							//Technologies

		System.out.println("String after concatinating is "+s);			//Core2WebTechnologies
		System.out.println("Capating of current string is "+s.capacity());	//24

		System.out.print("\nEnter the new string: ");
		s.append(sc.next());							//Biencaps
		
		System.out.println("String after concatinating is "+s);			//Core2WebTechnologiesBiencaps

		System.out.println("Capating of current string is "+s.capacity());	//50 (here capacity increase by formula as
											// (24 * 2 + 2 = 50)
	}
}




