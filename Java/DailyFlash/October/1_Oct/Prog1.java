
import java.util.Scanner;

class Prog1 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n;
		System.out.println("Enter the size of array: ");
		n = sc.nextInt();

		int[] arr = new int[n];

		System.out.println("Enter the elements in the array: ");
		for(int i=0;i<arr.length;i++) {

			arr[i] = sc.nextInt();
		}

		System.out.println("\nPrinting array in reverse order");
		for(int i=0;i<arr.length;i++) {

			System.out.print(arr[n-i-1]+" ");
		}

		System.out.println();
	}
}

