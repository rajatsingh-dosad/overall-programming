

#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr1[n];
	int arr2[n];
	int arrMinMax[4];
	int max1=0,max2=0,min1,min2;

	printf("Enter %d element for array1 :\n",n);
	for(int i=0;i<n;i++) {

		scanf("%d",&arr1[i]);
	}

	printf("Enter %d element for array2 :\n",n);
	for(int i=0;i<n;i++) {

		scanf("%d",&arr2[i]);
	}
	min1 = arr1[0];
	min2 = arr2[0];
	for(int i=0;i<n;i++) {
		if(arr1[i] > max1)
			max1= arr1[i];

		if(arr2[i] > max2)
			max2= arr2[i];

		if(arr1[i] < min1)
			min1= arr1[i];

		if(arr2[i] < min2)
			min2= arr2[i];
	}
	arrMinMax[0] = min1;
	arrMinMax[1] = min2;
	arrMinMax[2] = max1;
	arrMinMax[3] = max2;


	for(int i=0; i<4 ; i++) {

		printf("%d ",arrMinMax[i]);
	}
	printf("\n");
}

