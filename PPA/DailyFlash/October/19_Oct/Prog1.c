
#include<stdio.h>

void main() {

	int arr[5][3];

	printf("Enter the marks of chemistry, maths and physics:\n\n");
	for(int i=0;i<5;i++) {
		
		printf("Enter the marks of student %d: ",i+1);
		for(int j=0;j<3;j++) {

			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0;i<3;i++) {

		int highMrk = 0;
		for(int j=0;j<5;j++) {

			if(arr[j][i]>highMrk)
				highMrk = arr[j][i];
		}
		printf("Highest marks in %d is:%d\n",i+1,highMrk);
	}
}
		




