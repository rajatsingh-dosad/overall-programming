
#include<stdio.h>

void main() {

	int arr1[] = {10,20,30,40,50};
	int arr2[] = {60,70,80,90,100};
	int arr3[] = {110,120,130};

	printf("Array1[0]%p\n",arr1);  		//200
	printf("Array1[4]%p\n",&arr1[4]);	//200

	printf("\n");
	printf("Array2[0]%p\n",arr2);		//200
	printf("Array2[4]%p\n",&arr2[4]);	//200
	
	printf("\n");
	printf("Array3[0]%p\n",arr3);		//200
	printf("Array3[4]%p\n",&arr3[2]);	//200


	printf("\n");
	printf("%p\n",&arr1);			//200
	printf("%p\n",&arr2);			//220
	printf("%p\n",&arr3);			//194
}
