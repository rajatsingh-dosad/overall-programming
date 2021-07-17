
import java.util.*;

class Prog1 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int row;
		System.out.print("Enter the size of row: ");
		row = sc.nextInt();

		int[][] arr = new int[row][];
		int col;
		for(int i=0;i<row;i++) {
			System.out.print("Enter the number of columns: ");
			col = sc.nextInt();
			arr[i] = new int[col];
			for(int j=0;j<col;j++) {
				arr[i][j] = sc.nextInt();

			}
		}
		
		System.out.println("OUTPUT:");
		for(int i=0;i<arr.length;i++) {

			for(int j=0;j<arr[i].length;j++) {

				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}


