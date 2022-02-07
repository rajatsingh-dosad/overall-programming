
import java.util.*;

class CommonElements {

	public static void main(String[] args) {

		
		
		//Using normal arrays
		/*int arr1[] = {1,5,10,20,40,80};
		int arr2[] = {6,7,20,80,100};
		int arr3[] = {3,4,15,20,30,70,80,120};
	

		for(int i=0;i<arr1.length;i++) {

			for(int j=0;j<arr2.length;j++) {

				if(arr1[i]==arr2[j]) {

					for(int k=0;k<arr3.length;k++) {

						if(arr2[j]==arr3[k]) {

							System.out.println(arr3[k]+" ");
							break;
						}

					}

				}
			}
		}*/

		Integer arr1[] = {1,5,10,20,40,80};
		Integer arr2[] = {6,7,20,40,80,100};
		Integer arr3[] = {3,4,15,20,30,40,70,80,120};

		List<Integer> al1 = new ArrayList<Integer>(Arrays.asList(arr2));
		List<Integer> al2 = new ArrayList<Integer>(Arrays.asList(arr3));

		for(int i=0;i<arr1.length;i++) {

			if(al1.contains(arr1[i])) {

				if(al2.contains(arr1[i])) {

					System.out.print(arr1[i]+" ");
				}
			}
		}
		System.out.println();

	
	}
}
