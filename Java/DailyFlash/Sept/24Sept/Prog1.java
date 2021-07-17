
import java.io.*;

import java.util.*;

class Program1 {

	public static void main(String[] args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Enter name grade age and marks");
		String data = br.readLine();

		StringTokenizer st = new StringTokenizer(data," ");

		String name = st.nextToken(); 
		char grade = st.nextToken().charAt(0);
		int age = Integer.parseInt(st.nextToken());
		double marks = Double.parseDouble(st.nextToken());

		System.out.println("Student name is: " + name);
		System.out.println("Student grade is: " + grade);
		System.out.println("Student age is: " + age);
		System.out.println("Student marks are: " + marks);

	}
		
}





