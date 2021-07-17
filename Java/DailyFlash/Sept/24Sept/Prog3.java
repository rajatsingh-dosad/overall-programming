
import java.util.*;

class Prog3 {


	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		
		for(int i=1;i<=3;i++) {
			
				System.out.println("Enter the name,grade,age and marks of student with space seperated: ");
				String std1 = sc.nextLine();

				StringTokenizer st1 = new StringTokenizer(std1," ");
				String token1std1 = st1.nextToken().trim();
				String token2std1 = st1.nextToken().trim();
				String token3std1 = st1.nextToken().trim();
				String token4std1 = st1.nextToken().trim();

				String name1 = token1std1;
				char grade1 = token2std1.charAt(0);
				int age1 = Integer.parseInt(token3std1);
				double marks1 = Double.parseDouble(token4std1);
		
				System.out.println("*********************The infomation of student :********************************");
				System.out.println("Name of student is : "+name1);
				System.out.println("Grade of student is : "+grade1);
				System.out.println("Age of student is : "+age1);
				System.out.println("Marks of student is : "+marks1);
			}
		}
}

		
