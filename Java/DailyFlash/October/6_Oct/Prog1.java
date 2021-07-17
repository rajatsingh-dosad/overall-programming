
import java.io.*;

class Prog1 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the Number of Planes: ");
		int plane = Integer.parseInt(br.readLine());
		
		System.out.print("Enter the Number of rows: ");
		int row = Integer.parseInt(br.readLine());
		
		System.out.print("Enter the Number of columns: ");
		int col = Integer.parseInt(br.readLine());

		int[][][] arr = new int[plane][row][col];
		int sum = 0;

		System.out.println("\nEnter the elements in array: ");
		for(int i=0;i<plane;i++) {

			for(int j=0;j<row;j++) {

				for(int k=0;k<col;k++) {

					arr[i][j][k] = Integer.parseInt(br.readLine());
					sum = sum + arr[i][j][k];
				}
			}
		}

		System.out.println("Sum of elements of array is "+sum);
	}
}
