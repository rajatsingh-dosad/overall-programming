
import java.util.*;

class Prog3 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		int row,col,row_sum,col_sum;
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

		System.out.println();
		for(int i = 0;i<row;i++) {
			
			row_sum = 0;
			for(int j=0;j<row;j++) {
				
				row_sum = row_sum + marr[i][j];
			
			}
			System.out.println("Addition of row "+i+" : "+row_sum);
		}
		System.out.println();
		for(int i=0;i<row;i++) {

			col_sum = 0;
			for(int j=0;j<row;j++) {

				for(int k=0;k<row;k++) {
					if(j==k)			
						col_sum = col_sum + marr[j][i];
				
				}
			}
			System.out.println("Addition of column "+i+" : "+col_sum);
		}
						
	}
}
