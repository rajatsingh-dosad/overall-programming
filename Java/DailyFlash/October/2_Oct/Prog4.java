
import java.util.*;

class Prog4 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");
		int row = sc.nextInt();
		int col = sc.nextInt();

		int arr[][] = new int[row][col];
		int transpose_arr[][] = new int[row][col];

		System.out.println("\nEnter the elements in array: ");
		for(int i=0;i<row;i++) {

			for(int j=0;j<col;j++) {

				arr[i][j] = sc.nextInt();
			}
		}
		
		for(int i=0;i<row;i++) {

			for(int j=0;j<col;j++) {

				transpose_arr[i][j] = arr[j][i];
			}
		}

		System.out.println("\nEntered matrix is: ");

		for(int i=0;i<row;i++) {

			for(int j=0;j<col;j++) {

				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}

		System.out.println("\nTranspose of matrix is: ");

		for(int i=0;i<row;i++) {

			for(int j=0;j<col;j++) {

				System.out.print(transpose_arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}

