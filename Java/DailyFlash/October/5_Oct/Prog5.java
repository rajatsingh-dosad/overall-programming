
import java.util.*;

class Prog5 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the size of array: ");
		int size = sc.nextInt();

		int[] arr = new int[size];

		System.out.print("Enter the elements in array: ");
		for(int i=0;i<size;i++) {

			arr[i] = sc.nextInt();
		}

		System.out.println("Output: Reverse of array: ");
		for(int i=arr.length-1;i>=0;i--) {

			System.out.print(arr[i]+" ");
		}
		System.out.println("\n");
	}
}


