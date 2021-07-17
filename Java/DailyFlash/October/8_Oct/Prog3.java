
import java.util.*;

class Prog3 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int row,col,sum = 0;
		System.out.print("Enter the number of rows: ");
		row = sc.nextInt();

		int[][] arr = new int[row][];
		for(int i=0;i<arr.length;i++) {
			System.out.print("Enter the number of columns: ");
			col = sc.nextInt();
			arr[i] = new int[col];
			for(int j=0;j<col;j++) {

				arr[i][j] = sc.nextInt();
				sum += arr[i][j];
			}
		}

		System.out.println("Sum = "+sum);
	}
}
