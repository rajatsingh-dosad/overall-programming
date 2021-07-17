
import java.util.*;

class Prog4 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int[][] arr = new int[4][];
		arr[0]  = new int[4];
		arr[1]  = new int[2];
		arr[2]  = new int[5];
		arr[3]  = new int[3];
		
		int sum;
		for(int i=0;i<arr.length;i++) {
			System.out.print("Person "+(1+i)+": ");
			for(int j=0;j<arr[i].length;j++) {

				arr[i][j] = sc.nextInt();
			}
			System.out.println();
		}

		System.out.println("\noutput: ");
		for(int i=0;i<arr.length;i++) {
		
			for(int j=0;j<arr[i].length;j++) {

				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		
		for(int i=0;i<arr.length;i++) {
			sum = 0;
			for(int j=0;j<arr[i].length;j++) {

				sum = sum + arr[i][j];
			}
			System.out.println("The numbers of books read by Person "+(i+1)+" is : "+sum);
		}
	}
}



