
import java.util.*;

class Prog1 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		int row,col;
		System.out.println("Enter the Number of rows and columns: ");
		row = sc.nextInt();
		col = sc.nextInt();

		int marr[][] = new int[row][col];

		System.out.println("\nEnter the elements in array: ");
		for(int i = 0;i<row;i++) {

			for(int j=0;j<row;j++) {

				marr[i][j] = sc.nextInt();
			}
		}

		System.out.println("\nEntered Matrix is: ");
		for(int i = 0;i<row;i++) {

			for(int j=0;j<row;j++) {

				System.out.print(marr[i][j]+" ");
			}
			System.out.println();
		}

		System.out.print("\nDiagonal elements are: ");
		for(int i = 0;i<row;i++) {

			for(int j=0;j<row;j++) {

				if(i==j)
					System.out.print(marr[i][j]+" ");
			}
		}
			System.out.println();
	}
}
