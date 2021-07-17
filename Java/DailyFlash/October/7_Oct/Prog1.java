
import java.util.*;

class Prog1 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int[][] arr = new int[3][];

		System.out.print("Enter the number of columns in row1: ");
		int row1 = sc.nextInt();
		
		System.out.print("Enter the number of columns in row2: ");
		int row2 = sc.nextInt();
		
		System.out.print("Enter the number of columns in row3: ");
		int row3 = sc.nextInt();

		arr[0] = new int[row1];
		arr[1] = new int[row2];
		arr[2] = new int[row3];

		System.out.println("Enter the elemenets in array: ");
		for(int i=0;i<arr.length;i++) {

			for(int j=0;j<arr[i].length;j++) {

				arr[i][j] = sc.nextInt();
			}
		}

		System.out.println("Output:\nThe elements in array are:\n");
		for(int i=0;i<arr.length;i++) {

			for(int j=0;j<arr[i].length;j++) {

				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}
		
