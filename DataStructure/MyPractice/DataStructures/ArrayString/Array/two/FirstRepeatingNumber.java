
import java.util.*;

class FirstRepeatingNumber {

	public static void main(String[] args) {

		int arr[] = {10,5,4,3,4,5,6};
		
		/*int flag = 0;
		for(int i=0;i<arr.length;i++) {
		
			for(int j=i+1;j<arr.length;j++){
				if(arr[i]==arr[j]) {
					System.out.println("The first repeating number is " + arr[i]);
					flag = 1;
					break;
				}
			}
			if(flag ==1)
				break;
		}*/




		//By sorting first and then checking if an elemnt's next element is the same element
		

		/*Arrays.sort(arr);

		for(int i=0;i<arr.length;i++) {

			if(arr[i] == arr[i+1]) {

				System.out.println("The first repeating number is "+arr[i]);
				break;
			}
		}*/



		//By using the collection framework
		//
		
		int min=-1;

		List<Integer> set = new ArrayList<>();

		for(int i=arr.length-1;i>=0;i--) {

			if(set.contains(arr[i])) 
				min = i;
			
			else
				set.add(arr[i]);

		}
		if(min!=-1)
			System.out.println("The first repeating number is "+arr[min]);
		else
			System.out.println("There is no repeating number");



	
	}
}
