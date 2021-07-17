

#include<stdio.h>

void main() {

	 int arr[] = {10,20,30,40,50};
	 
	 int *iptr = &(arr[1]);

	 printf("%d\n",*iptr);	//20

	 int *ansptr = ++iptr;	//iptr = iptr + 1

	 printf("%p\n",ansptr); //address

	 printf("%d\n",*ansptr); //30	
	 
	 printf("%d\n",*iptr);  //30	
}
