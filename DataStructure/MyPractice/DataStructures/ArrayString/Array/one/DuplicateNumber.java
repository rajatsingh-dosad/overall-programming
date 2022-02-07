
import java.util.*;

class DuplicateArray {

	public static void main(String[] args) {
		



		Integer arr1[] = {1,2,5,4,5,3,3,3,};
		
		//***************Creating a different array for non-duplicate values i.e not adding duplicate values in new array
		
		int arr2[] = new int[arr1.length];
		
		arr2[0] = arr1[0];
		int flag = 0,dup = 0;
		int temp = 1;
		for(int i=1;i<arr1.length;i++) {
			for(int j=0;j<arr2.length;j++) {
				
				if(arr1[i] == arr2[j]) {

					flag= 1;
					break;		
				}
			}
			if(flag==1) {
				;	
				flag = 0;
			}
			else {
				arr2[temp] = arr1[i];
				temp++;
			}
				
		}

		for(int i=0;i<temp;i++) {

			System.out.print(arr2[i]+" ");
		}
		System.out.println();
		






		//****************Iterating one element with rest of array element to check if same print it

		/*for(int i=0;i<arr1.length;i++) {

			for(int j=i+1;j<arr1.length;j++) {
			
				if(arr1[i] == arr1[j]) {

					System.out.println("Duplicate element is "+arr1[i]);
					break;
				}
			

			}
		}*/


	
			
		//****************Using LinkedHashSet

	
		// Set<Integer> set = new LinkedHashSet<Integer>();
		// for(int i=0;i<arr1.length;i++) {

		// 	set.add(arr1[i]);
		// }
	
		// Integer arr2[] = new Integer[set.size()];
		// arr1 = set.toArray(arr2);

		// for(Integer a:arr1) {

		// 	System.out.println(a);
		// }	


	}
}
