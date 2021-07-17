
#include<stdio.h>

void main() {
	
	printf("Enter the float value:\n");
	float f;
	float farr[10];
	float* farrptr[10];
	for(int i=0;i<5;i++) {
		scanf("%f",&f);
		farr[i] = f;
		farrptr[i] = &farr[i];
		
	}
	
	float max = 0;
	int index = 0;
	for(int i=0;i<5;i++) {

		printf("Element %d : %f\n",(i+1),*farrptr[i]);
		if(*farrptr[i] > max) {
			max = *farrptr[i];
			index = i;
		}
	}
	printf("Biggest Value is %f and its index is %d\n",max,index);
}



