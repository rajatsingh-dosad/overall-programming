
#include<stdio.h>

void main() {

	int m,n;
	printf("Enter the size of row and columns: ");
	scanf("%d%d",&m,&n);

	int arr[m][n];

	printf("Enter the elements in the array:\n");
	for(int i=0;i<m;i++) {

		for(int j=0; j<n; j++) {

			scanf("%d",&arr[i][j]);
		}
	}
	
	int sum;
	for(int i=0;i<m;i++) {
		sum = 0;
		for(int j=0; j<n; j++) {
			
			sum = sum + arr[i][j];	
			
		}
		printf("Average of row %d: %.2f\n",i,(float)sum/n);
	}

	printf("\n");
	for(int i=0;i<n;i++) {
		sum = 0;
		for(int j=0; j<m; j++) {
			
			sum = sum + arr[j][i];	
			
		}
		printf("Average of col %d: %.2f\n",i,(float)sum/m);
	}
}


	
