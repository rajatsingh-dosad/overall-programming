
import java.util.*;

class KthSmallestLargest {

	public static void main(String[] args) {
		
		int arr[] = {5,2,3,6,1,230,23,45};
		int n = 3;
		Arrays.sort(arr);
	

		for(int a:arr) {

			System.out.print(a+" ");
		}
		System.out.println();
		System.out.println("The 2nd smallest number is "+arr[n-1]);
		
		System.out.println("The 2nd maximum number is "+arr[arr.length-n]);

	}
}
