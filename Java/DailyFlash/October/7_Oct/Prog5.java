
import java.util.*;

class Prog5 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number of students: ");
		int stu = sc.nextInt();
		
	
		int[][] arr= new int[stu][];
		for(int i = 0 ;i<stu;i++) {
			System.out.println("Enter the number of tests for student "+(1+i)+": ");
			int tes = sc.nextInt();
			arr[i] = new int[tes];
		}	

		for(int i=0;i<arr.length;i++) {
			System.out.print("Student "+(1+i)+": ");
			for(int j=0;j<arr[i].length;j++) {

				arr[i][j] = sc.nextInt();
			}
			System.out.println();
		}
		System.out.println("Output: ");
		for(int i=0;i<arr.length;i++) {
			System.out.print("Student "+(1+i)+": ");
			for(int j=0;j<arr[i].length;j++) {

				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		
		int sum;
		for(int i=0;i<arr.length;i++) {
			sum = 0;
			for(int j=0;j<arr[i].length;j++) {
				sum = sum + arr[i][j];		
				
			}
			System.out.println("Average of student "+(1+i)+" is : "+(sum/arr[i].length));
		
		}
	}
}

		






