
import java.util.*;

class Prog2 {

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
		
		int sum = 0;
		System.out.print("\nEven numbers are: ");
		for(int i = 0;i<row;i++) {

			for(int j=0;j<row;j++) {
				
				if(marr[i][j]%2==0) {
					System.out.print(marr[i][j]+" ");
					sum = sum + marr[i][j];
				}
			}
		}
		System.out.println();
		System.out.println("Addition of even numbers are: "+sum);
	}
}
