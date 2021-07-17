
import java.util.*;

class Prog4 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the number of plane: ");
		int plane = sc.nextInt();
		
		System.out.print("Enter the number of row: ");
		int row = sc.nextInt();
		
		System.out.print("Enter the number of col: ");
		int col = sc.nextInt();
		sc.nextLine();

		int arr[][][] = new int[plane][row][col];

		System.out.println("Enter the elements in an array: " );
		String str = sc.nextLine();

		StringTokenizer st = new StringTokenizer(str," ");

		for(int i=0;i<plane;i++) {

			for(int j=0;j<row;j++) {

				for(int k=0;k<col;k++) {

					arr[i][j][k] = Integer.parseInt(st.nextToken());
				}
			}
		}

		System.out.println("\nEven Numbers are: ");
		for(int i=0;i<plane;i++) {

			for(int j=0;j<row;j++) {

				for(int k=0;k<col;k++) {
					
					if(arr[i][j][k]%2==0)
						System.out.print(arr[i][j][k]+" ");
				}
			}
		}
		System.out.println();
	}
}


