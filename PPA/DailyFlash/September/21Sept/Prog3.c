
#include<stdio.h>

void main() {

	int m,n;
	printf("Enter the size of array1: ");
	scanf("%d",&m);
	
	printf("Enter the size of array2: ");
	scanf("%d",&n);

	int arr1[m];
	int arr2[n];
	
	printf("Enter elements of arr1: ");
	for(int i=0;i<m;i++) {
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter elements of arr2: ");
	for(int i=0;i<n;i++) {
		scanf("%d",&arr2[i]);
	}
	
	printf("\n");
	
	int flag = 0;
	for(int i=0;i<m;i++) {
		
		if(arr1[i]==arr2[i]*arr2[i])	
			flag=0;
		else {
			flag = 1;
			break;
		}
	}

	if(flag==0)
		printf("1\n");
	else
		printf("-1\n");
}

		
