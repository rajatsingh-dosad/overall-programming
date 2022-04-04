
// Ternary Search

#include <stdio.h>

//Recursive Way
int ternarySearch(int arr[], int start,int end,int ele) {
	
	if(start<=end) {

		int mid1 = start + (end-start)/3;
		int mid2 = end - (end-start)/3;

		if(arr[mid1]==ele)
			return mid1;
		if(arr[mid2]==ele)
			return mid2;

		if(arr[mid1]>ele)
			return ternarySearch(arr,start,mid1-1,ele);
		else if(arr[mid2]<ele)
			return ternarySearch(arr,mid2+1,end,ele);
		else
			return ternarySearch(arr,mid1+1,mid2-1,ele);
	}
	return -1;
}

void main() {

	int arr[] = {3,6,9,12,15,18,21,24,27,30};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int ele = 1;

	int index = ternarySearch(arr,0,size-1,ele);

	if(index!=-1)
		printf("The element is present at index: %d\n",index);
	else
		printf("Element not found\n");
}
