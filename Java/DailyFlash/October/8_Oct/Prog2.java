
import java.util.*;

class Prog2 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int row;
		System.out.print("Enter the size of rows: ");
		row = sc.nextInt();
		
		//TPYE 1
		int[][] arr  = new int[row][];
		for(int i=0;i<row;i++) {

			arr[i] = new int[i+1];
		}

		System.out.println("Enter the elements in array1 for type 1: ");
		for(int i=0;i<arr.length;i++) {

			for(int j=0;j<arr[i].length;j++) {

				arr[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("OUTPUT TYPE 1:");
		for(int i=0;i<arr.length;i++) {

			for(int j=0;j<arr[i].length;j++) {

				System.out.print(arr[i][j] +" ");
			}
			System.out.println();
		}

		//TPYE 2
		int[][] arr2 = {{1},{2,3},{4,5,6}};
		System.out.println("\nOUTPUT TYPE 2:");
		for(int i=0;i<arr2.length;i++) {

			for(int j=0;j<arr2[i].length;j++) {

				System.out.print(arr2[i][j] +" ");
			}
			System.out.println();
		}


		//TPYE 3
		
		int[][] arr3 = {

			new int[]{1},
			new int[]{2,3},
			new int[]{4,5,6},
		};
		System.out.println("\nOUTPUT TYPE 3:");
		for(int i=0;i<arr3.length;i++) {

			for(int j=0;j<arr3[i].length;j++) {

				System.out.print(arr3[i][j] +" ");
			}
			System.out.println();
		}


	}
}




			
