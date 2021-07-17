
import java.util.*;

class Prog5 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the number of plane: ");
		int plane = sc.nextInt();

		System.out.println("Enter the number of rows: ");
		int row = sc.nextInt();
		
		System.out.println("Enter the number of columns: ");
		int col = sc.nextInt();

		int arr[][][] = new int[plane][row][col];

		System.out.println("Enter the elements in array: ");
		for(int i=0;i<plane;i++) {

			for(int j=0;j<row;j++) {

				for(int k=0;k<col;k++) {

					arr[i][j][k] = sc.nextInt();
				}
			}
		}

		System.out.println("Elements divisible by 5 are : ");
		for(int i=0;i<plane;i++) {

			for(int j=0;j<row;j++) {

				for(int k=0;k<col;k++) {
					
					if(arr[i][j][k]%5==0)
						System.out.print(arr[i][j][k]+" ");
				}
			}
		}
		System.out.println();
	}
}
