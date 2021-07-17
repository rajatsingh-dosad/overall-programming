
#include<stdio.h>

void main() {

	int plane , row, col;
	printf("Enter the plane, row and col of array: ");
	scanf("%d%d%d",&plane,&row,&col);

	int arr3D[plane][row][col];
	int arr1[row][col];
	int arr2[row][col];
	printf("Enter the elements in an array:\n");
	for(int i=0;i<plane;i++) {

		for(int j=0;j<row;j++) {

			for(int k=0;k<col;k++) {

				scanf("%d",&arr3D[i][j][k]);
			}
		}
	}
	
	for(int i=0;i<plane;i++) {
		
		for(int j=0;j<row;j++) {

			for(int k=0;k<col;k++) {

				if(i==0) 
					arr1[j][k] = arr3D[i][j][k];
				else if(i==1)
					arr2[j][k] = arr3D[i][j][k];
			}
		}
	}
	printf("Array1:\n");
	for(int i=0;i<row;i++) {
		
		for(int j=0;j<col;j++) {
			
			printf("%d ",arr1[i][j]);
				

		}
		printf("\n");
		
	}
	printf("Array2:\n");
	for(int i=0;i<row;i++) {
		
		for(int j=0;j<col;j++) {
			
			printf("%d ",arr2[i][j]);
				

		}
		printf("\n");
	}
}
		
