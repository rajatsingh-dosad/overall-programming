

//Reverse an array

#include <stdio.h>

//Using Normal way
/*void reverse(int arr[], int size) {

	int temp = 0;
	for(int i=0;i<size/2;i++) {
	
		temp = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1-i] = temp;
	}
}
*/


//Using recursion
void reverse(int arr[], int size) {
	
	static int i = 0;
	if(i>size/2)
		return;
	int temp = arr[i];
	arr[i] = arr[size-1-i];
	arr[size-1-i] = temp;
	i++;
	reverse(arr,size);
}


void main() {

	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);

	reverse(arr,size);

	printf("The reversed array is: ");
	for(int i=0;i<size;i++) {

		printf("%d ",arr[i]);
	}
	printf("\n");
}
