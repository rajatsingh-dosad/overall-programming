
// Ternary Search

#include <stdio.h>

//Iterative Way
int ternarySearch(int arr[], int size,int ele) {

	int start = 0;
	int end = size-1;

	while(start<=end) {
	
		int mid1 = start + (end-start)/3;
		int mid2 = end - (end-start)/3;

		if(arr[mid1]==ele)
			return mid1;
		if(arr[mid2]==ele)
			return mid2;

		if(arr[mid1]>ele)
			end = mid1-1;
		else if(arr[mid2]<ele)
			start = mid2 + 1;
		else {

			start = mid1 + 1;
			end = mid2-1;
		}

		//By writing this we save one iteration in while loop i.e we saved time
		if(start==end && arr[start]==ele)
			return start;
	}
	return -1;
}

void main() {

	int arr[] = {3,6,9,12,15,18,21,24,27,30};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int ele = 2;

	int index = ternarySearch(arr,size,ele);

	if(index!=-1)
		printf("The element is present at index: %d\n",index);
	else
		printf("Element not found\n");
}
