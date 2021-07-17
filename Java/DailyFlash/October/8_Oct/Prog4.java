
import java.util.*;

class Prog4 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int row,col;
		System.out.print("Enter the number of rows: ");
		row = sc.nextInt();

		int[][] arr = new int[row][];
		for(int i=0;i<arr.length;i++) {
			System.out.print("Enter the number of columns: ");
			col = sc.nextInt();
			arr[i] = new int[col];
			for(int j=0;j<arr[i].length;j++) {

				arr[i][j] = sc.nextInt();
			}
		}
		System.out.println("Even NUMBERS: ");
		for(int i=0;i<arr.length;i++) {
			for(int j=0;j<arr[i].length;j++) {

				if(arr[i][j]%2==0)
					System.out.print(arr[i][j]+ " ");
			}
		}
		System.out.println();


	}
}
