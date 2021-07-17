
import java.util.*;

class Prog2 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int sum = 0,odd_no = 0;

		System.out.print("Enter the row and column of 2D array: ");
		int row = sc.nextInt();
		int col = sc.nextInt();

		int[][] arr = new int[row][col];

		System.out.println("Enter the elements in array: ");
		for(int i=0;i<row;i++) {

			for(int j=0; j<col; j++) {

				arr[i][j] = sc.nextInt();
			}
		}
	
		
	
		
		for(int i=0;i<row;i++) {

			for(int j=0; j<col; j++) {

				if(arr[i][j]%2==0)
					sum = sum + arr[i][i];
				if(arr[i][j]%2!=0)
					if(arr[i][j] > odd_no)
						odd_no = arr[i][j] ;
			}
		}

		System.out.println("Sum of even Elements: "+sum);
		System.out.println("Max odd Elements: "+odd_no);
		System.out.println("Multiplication of sum of even elements and max odd element: "+(odd_no*sum));
	}
}
		
		


