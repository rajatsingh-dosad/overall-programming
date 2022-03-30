
#include <stdio.h>

int interpolationSearch(int arr[],int start, int end, int ele) {

	if(start> end)
		return -1;

	else {

		int index = start + (end-start) * (ele-arr[start])/(arr[end]-arr[start]);

		if(arr[index]==ele)
			return index;

		if(arr[index]>ele)
			return interpolationSearch(arr,start,index-1,ele);
		return interpolationSearch(arr,index+1,end,ele);
	}
}

void main() {

	int arr[] = {7,10,15,23,32,36,48,53,62,75};

	int size = sizeof(arr)/sizeof(arr[0]);

	int ele = 62;

	int index = interpolationSearch(arr,0,size-1,ele);

	if(index!=-1)
		printf("The element is present at %d index\n",index);
	else
		printf("Element not found\n");
}
