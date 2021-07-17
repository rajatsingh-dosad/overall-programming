
#include<stdio.h>

void main() {

	int m;
	printf("Enter the size of array: ");
	scanf("%d",&m);
	

	int arr1[m];
	int arr2[m];
	int arr3[m];

	printf("Array1 elements: ");
	for(int i=0;i<m;i++) {

		scanf("%d",&arr1[i]);
	}
	
	printf("Array2 elements: ");
	for(int i=0;i<m;i++) {

		scanf("%d",&arr2[i]);
	}
	int max,min;
	for(int i=0;i<m;i++) {

		if(arr2[i]%arr1[i]==0) {

			max =(arr2[i]>arr1[i] ? arr2[i] : arr1[i]);
			int fac= 1;
			while(max>0) {

				fac =fac * max;
				max--;
			}
			
			arr3[i] = fac;
		}
		else {
			min = arr1[i]<arr2[i] ? arr1[i] : arr2[i];
			arr3[i] =min;
		}
	}
	
	printf("Output: ");
	for(int i=0;i<m;i++) {

		printf("%d ",arr3[i]);
	}
	printf("\n");
}







