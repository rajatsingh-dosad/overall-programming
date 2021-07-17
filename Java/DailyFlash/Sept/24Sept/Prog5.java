
import java.util.*;

class Prog5 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		String s = null;
		for(int i=1;i<5;i++) {
			System.out.println("Enter the student name, grade ,age and marks: ");
			String info = sc.nextLine();
			if(i==1)
				s = " ";
			else if(i==2)
				s = ",";
			else if(i==3)
				s = ":";
			else if(i==4)
				s = "-";
			StringTokenizer st = new StringTokenizer(info,s);
			
			String name = st.nextToken();
			char grade = st.nextToken().charAt(0);
			int age = Integer.parseInt(st.nextToken());
			double marks = Double.parseDouble(st.nextToken());
			
			System.out.printf("***********Student%d info IS***********************\n",i);
			System.out.println("Student name is "+name);
			System.out.println("Student grade is "+grade);
			System.out.println("Student age is "+age);
			System.out.println("Student marks is "+marks+"\n");

		}
	}
}



