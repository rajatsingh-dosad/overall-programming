

//Note: The array should be sorted

//NOTE: If the array is uniform(i.e difference between elements are equal) then at this time interpolation search time complexity is O(1)
//	Uniform array: 7 14 21 28 35 42 49 i.e differnce between element is 7
//
//	If the array is not uniform it gives output in more than one iteration

#include <stdio.h>

int interpolationSearch(int arr[],int size,int ele) {

	int start = 0;
	int end = size-1;

	while(start<=end) {

		int index = start + (end-start) * (ele-arr[start])/(arr[end]-arr[start]);

		if(arr[index]==ele)
			return index;

		if(arr[index]>ele)
			end = index -1;
		else
			start = index + 1;
	}

	return -1;
}

void main() {

	int arr[] = {7,10,15,23,32,36,48,53,62,75};

	int size = sizeof(arr)/sizeof(arr[0]);

	int ele = 3;

	int index = interpolationSearch(arr,size,ele);

	if(index!=-1)
		printf("The element is present at %d index\n",index);
	else
		printf("Element not found\n");
}
