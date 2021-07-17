
import java.util.*;

class Intersection {

	public static void main(String[] args) {
		

		//Finding intersection using Collection

		/*Integer arr1[] = {1,2,3,4,5};
		Integer arr2[] = {2,3,7};

		List<Integer> al1 = new ArrayList<Integer>(Arrays.asList(arr1));

		for(int i=0;i<arr2.length;i++) {

			if(al1.contains(arr2[i])) {

				System.out.println(arr2[i]);
			}
		}*/

		
		int arr1[] = {1,2,3,4,5};
		int arr2[] = {2,3,7};

		for(int i=0;i<arr1.length;i++) {


			for(int j=0;j<arr2.length;j++) {

				if(arr1[i] == arr2[j]) {

					System.out.println(arr1[i]);
				}
			}
		}
	}
}
