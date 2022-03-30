
#include <stdio.h>

//Iterative
/*
int linearSearch(int arr[], int size, int ele) {

	//Linear search can be optimized a bit if the element to be searched is the last element in the array - O(1)
	if(arr[size-1]==ele)
		return size-1;

	for(int i=0;i<size;i++) {
		
		if(arr[i]==ele)
			return i;
	}
	return -1;
}
*/


//Using recursion
int linearSearch(int arr[],int size, int ele) {

	static int i=0;
	if(i==size)
		return -1;
	if(arr[i]==ele)
		return i;
	i++;
	linearSearch(arr,size,ele);
}

void main() {

	int arr[] = {25,13,7,11,21,5,19,17};

	int size = sizeof(arr)/sizeof(int);		
	
	int ele;

	printf("Enter element to search: ");
	scanf("%d",&ele);

	int index = linearSearch(arr,size,ele);

	if(index!=-1)
		printf("The element is present at index: %d\n",index);
	else
		printf("The element is not present in the array\n");

}
