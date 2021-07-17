
import java.util.*;

class Prog1 {

	public static void main(String[] args) {

		int marr[][] = new int[3][3];

		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter elements in array: ");
		for(int i=0;i<3;i++) {

			for(int j=0;j<3;j++) {

				marr[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("Elements in array are: ");
		for(int i=0;i<3;i++) {

			for(int j=0;j<3;j++) {

				System.out.print(marr[i][j]+" ");

			}
			System.out.println();
		}


	}
}
