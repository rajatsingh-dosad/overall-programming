
import java.util.*;

class InputMultArray {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter rows and columns: ");
		int row = sc.nextInt();
		int col = sc.nextInt();

		char marr[][] = new char[row][col];

		System.out.println("Enter the elements in array: ");
		for(int i=0;i<row;i++) {

			for(int j=0;j<col;j++) {

				marr[i][j] = sc.next().charAt(0);
			}
		}
		
		System.out.println("\nEntered array in matrix form is: ");		
		for(int i=0;i<row;i++) {

			for(int j=0;j<col;j++) {

				System.out.print(marr[i][j]+"  ");
			}
			System.out.println();
		}
	}
}
