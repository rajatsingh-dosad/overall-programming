
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ") ;
	scanf("%d",&n);

	char arr[n];

	for(int i=0;i<n;i++) {

		scanf(" %c",&arr[i]);
	}

	for(int i=0; i<4 ; i++) {

		if(i==3){
			for(int j=0;j<n;j++) {
				printf("%c ",arr[j]);
			}
		}
		else	{

			for(int k=0;k<=i;k++) {
				printf("%c ",arr[k]);
			}
		}
		printf("\n");

	}
}


		
