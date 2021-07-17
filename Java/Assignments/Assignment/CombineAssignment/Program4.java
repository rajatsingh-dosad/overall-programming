
/*	Program 4: Write a program to find second largest number from the given 3 numbers.
	
	Take following set of inputs:-
	A] int a = 10, b = 20, c = 30; <- second largest number is 20
	B] int a = 23334, b = 1010, c = 10000 by<- second largest number is 10000
	C] int a = 1999, b = 2000, c = 1998 <- second largest number is 1999
	
	Optional: If you know the concept of array in java then solve following test
	cases using array.
	A] 455 800 56 39 290 18 383 3 290 29 10
	B] 10 9 4 5 6 7 8 3
	C] 10 8 56 23 45 97
	
	(I would suggest you attempt this option. If you do not know about the
	array, you can check on the internet)
*/


class SecondLargest {

	public static void main(String[] args) {

	/*	int a=1999, b=2000, c=1998;

		if((a>b && a<c) || (a>c && a<b))
			System.out.println("Second largest number is "+a);
		else if((b>c && b<a) || (b>a && b<c))
			System.out.println("Second largest number is "+b);
		if((c>b && c<a) || (c>a && c<b))
			System.out.println("Second largest number is "+c);
	*/
		
		int  temp ;
	//	int arr[] = {455, 800, 56, 39, 290, 18, 383, 3, 290, 29, 10};
		
	//	int arr[] = {10, 9, 4, 5, 6, 7, 8, 3};
	
		int arr[] = {10, 8, 56, 23, 45, 97};
		for(int i=0; i<arr.length;i++) {
			
			for(int j=i+1;j<arr.length;j++) {

				if(arr[i]> arr[j]) {
					temp = arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			

			}
		}
		System.out.println("Second largest number is "+arr[arr.length-2]);

	}
}
