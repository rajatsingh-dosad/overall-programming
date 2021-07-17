
#include<stdio.h>

void main() {

	int iarr1[] = {10,20,30,40,50};
	int iarr2[] = {60,70,80,90,100};

	float farr1[] = {10.5,20.5,30.5,40.5,50.5};
	float farr2[] = {60.5,70.5,80.5,90.5,100.5};

	void  *iptr1 = iarr1;
	void *iptr2 = iarr2;
	void *fptr1 = farr1;
	void *fptr2 = farr2;

	void *vptr[] = {iptr1,iptr2,fptr1,fptr2};
	
	for(int i=0;i<4;i++) {
		if(i==0) {
			printf("Printing first integer array:\n");
			for(int j=0;j<5;j++) {
				printf("%d ",*((int *)vptr[i]+j));
			}
		}
		else if(i==1) {
			printf("\n\nPrinting second integer array:\n");
			for(int j=0;j<5;j++) {
				printf("%d ",*((int *)vptr[i]+j));
			}
		}
		else if(i==2) {
			printf("\n\nPrinting first float array:\n");
			for(int j=0;j<5;j++) {
				printf("%.2f ",*((float *)vptr[i]+j));
			}
		}
		else if(i==3) {
			printf("\n\nPrinting first integer array:\n");
			for(int j=0;j<5;j++) {
				printf("%.2f ",*((float *)vptr[i]+j));
			}
		}



		
	}
	printf("\n");

}
