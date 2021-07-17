
import java.util.*;

class Prog1 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the size of array: ");
		int size  = sc.nextInt();
	
		int[] arr1 = new int[size];
		int[] arr2 = new int[size];
		int[] arr3 = new int[size];

		System.out.println("Enter the elements in array1: ");
		for(int i=0;i<size;i++) {

			arr1[i] = sc.nextInt();
		}
	
		System.out.println("Enter the elements in array2: ");
		for(int i=0;i<size;i++) {

			arr2[i] = sc.nextInt();
		}

		System.out.println("After operation the elements in third array are: ");
		for(int i=0;i<size;i++) {

			arr3[i] = arr1[i] * arr2[i];
			System.out.print(arr3[i]+" ");
		}
		System.out.println();
	}
}
