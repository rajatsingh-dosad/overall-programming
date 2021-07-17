
import java.util.Scanner;

class Prog2 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n;
		System.out.print("Enter the size of array: ");
		n = sc.nextInt();

		int[] arr  = new int[n];

		System.out.println("Enter the elements in an array: ");
		for(int i=0; i<arr.length; i++) {

			arr[i] = sc.nextInt();
		}

		int sum = 0;
		for(int i=0;i<arr.length;i++) {

			sum = sum + arr[i];
		}

		System.out.println("The sum of all elements of array is "+sum);
	}
}



