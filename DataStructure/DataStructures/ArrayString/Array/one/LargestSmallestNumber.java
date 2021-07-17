
import java.util.*;

class SmallestLargestNumber {

	public static void main(String[] args) {

		int arr[] = {23,25,9323,9759,930};

		/*Arrays.sort(arr);

		System.out.println(arr[0]);
		System.out.println(arr[arr.length-1]);
		*/

		int min = 9999;
		int max = 0;

		for(int i=0;i<arr.length;i++) {

			if(arr[i] > max)
				max = arr[i];
			if(arr[i] < min)
				min = arr[i];
		}

		System.out.println(min+ " " +max);
	}
}
