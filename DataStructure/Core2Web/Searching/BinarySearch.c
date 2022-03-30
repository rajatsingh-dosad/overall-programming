
//Binary Search

#include <stdio.h>

//Iterative Way
/*int binarySearch(int arr[],int size,int ele) {

	int start = 0;
	int end = size-1;
	int mid;

	while(start<=end) {
		mid = start + (end-start)/2;
		if(arr[mid]==ele)
			return mid;
		if(arr[mid]>ele)
			end = mid-1;
		else
			start= mid+1;;
	}
	return -1;
}
*/


//Using Recursion
int binarySearch(int arr[],int start,int end,int ele) {

	if(start<=end) {

		int mid = start + (end-start)/2;

		if(arr[mid]==ele)
			return mid;
		if(arr[mid]>ele) 
			return binarySearch(arr,start,mid-1,ele);
		return binarySearch(arr,mid+1,end,ele);
	}
	return -1;
}

void main() {

	int arr[] = {3,27,31,125,225,350,729,830,990,1120};

	int size = sizeof(arr)/sizeof(int);
	int start = 0;
	int end = size-1;

	int ele;

	printf("Enter element to search: ");
	scanf("%d",&ele);

	int index = binarySearch(arr,start,end,ele);

	if(index!=-1)
		printf("The element is present at index: %d\n",index);
	else
		printf("The element is not present in the array\n");
}
