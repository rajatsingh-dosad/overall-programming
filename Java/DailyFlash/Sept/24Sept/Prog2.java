
import java.util.*;

class Prog2 {

	public static void main(String[] args)  {

		Scanner sc = new Scanner(System.in);
		

		for(int i =1; i<=2; i++) {
		
			System.out.println("Enter the student1 name,grade,age and marks with comma seperated : ");
			String stud1Info = sc.nextLine();
		

			StringTokenizer st1 = new StringTokenizer(stud1Info,",");
			String token1 = st1.nextToken().trim();
			String token2 = st1.nextToken().trim();
			String token3 = st1.nextToken().trim();
			String token4 = st1.nextToken().trim();

			String name1 = token1;
			char grade1 = token2.charAt(0);
			int age1 = Integer.parseInt(token3);
			double marks1 = Double.parseDouble(token4);
		
		
			System.out.println("**********************Information of student**********************");
			System.out.println("Student name is "+name1);
			System.out.println("Student grade is "+grade1);
			System.out.println("Student age is "+age1);
			System.out.println("Student marks is "+marks1+"\n");
		}
		
	}
}





