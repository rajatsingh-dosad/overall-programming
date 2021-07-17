
import java.util.*;

class Prog3 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the row and col of array: ");
		int row = sc.nextInt();
		int col = sc.nextInt();

		int[][] arr1 = new int[row][col];
		int[][] arr2 = new int[row][col];
		int[][] arr3 = new int[row][col];

		System.out.println("Enter elements in array1: ");
		for(int i=0;i<row;i++) {

			for(int j=0;j<col;j++) {

				arr1[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("Enter elements in array2: ");
		for(int i=0;i<row;i++) {

			for(int j=0;j<col;j++) {

				arr2[i][j] = sc.nextInt();
			}
		}

		
		System.out.println("Output: The third matrix is: ");
		for(int i=0;i<row;i++) {

			for(int j=0;j<col;j++) {

				System.out.print((arr1[i][j] + arr2[i][j])+" ");
			}
			System.out.println();
		}
	}

}
