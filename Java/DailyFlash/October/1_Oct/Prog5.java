
import java.util.*;

class Prog5 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n;
		System.out.println("Enter the size of array: ");
		n = sc.nextInt();

		int[] arr1 = new int[n];
		int[] arr2 = new int[n];
		Arrays.fill(arr2,0);
		
		System.out.println("Enter elements in 1 array: ");
		for(int i=0;i<arr2.length;i++) {

			arr1[i] = sc.nextInt();
		}

		for(int i=0;i<arr1.length;i++) {

			if(arr1[i]%2==0)
				arr2[i] = -1;
		}
		
		System.out.println("Printing 1 array: ");
		for(int i=0;i<n;i++) {

			System.out.println(arr1[i]+" ");
		}
		System.out.println();
		
		System.out.println("\nPrinting 2 array: ");
		for(int i=0;i<n;i++) {

			System.out.println(arr2[i]+" ");
		}
		System.out.println();
	}
}

