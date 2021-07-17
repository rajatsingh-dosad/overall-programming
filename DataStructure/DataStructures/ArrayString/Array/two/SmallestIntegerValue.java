
/*
 	Title: Find the smallest positive integer value that cannot be represented as a sum
	of any subset of a given array
*/

// Given a sorted array (non-decending order)
// of positive numbers, find the smallest positive integer value
// that cannot be represented as a sum of the elements of any subset of a given
// set, and we are expected to do this in O(n)


//Example 1: Input: arr[] = {1,3,6,10,11,15}
//	     Output : 2
//	     Explanation : 1,3,6,10,11,15,4,7,36,20...


//Example 2: Input arr[] = {1,1,1,1}
//		Output: 5
//		Explanation :1,2,3,4


//Example 3: Input arr[] = {1,1,3,4}
//		Output: 10
//		Explanation: 1, 2, 3 4, 5, 6, 7 , 8 , 9}
//

//Example 4: Input arr[] = {2}
//		Output : 1
//		Explanation : the smallest positive integer value is 1


class SmallestPositiveValue {

	public static void main(String[] args) {
		
		int arr[] = {1,1,3,4};

		int sum = 1;
		for(int i=0;i<arr.length;i++) {
		
			if(arr[i] <= sum) {
				
				sum = sum + arr[i];
			}
		}

		System.out.println(sum);

	}	
}	
