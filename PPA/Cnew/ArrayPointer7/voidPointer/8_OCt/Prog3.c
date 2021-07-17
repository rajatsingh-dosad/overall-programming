
#include<stdio.h>

void main() {
	
	
	int iarr[] = {10,20,30,40};
	char carr[] = {'A','B','C','D'};
	float farr[] = {10.5,20.5,30.,5};	
	void *vptr1 = iarr;
	void *vptr2 = carr;
	void *vptr3 = farr;

	printf("%d\n",*(int *)vptr1);		//10
	printf("%c\n",*(char *)vptr2);		//A
	printf("%f\n",*(float *)vptr3);		//10.5

	vptr1 = (int *)vptr1 + 1;
	vptr2 = vptr2 + 1;
	vptr3 = (float *)vptr3 + 1;

	printf("%d\n",*(int *)vptr1);		//20
	printf("%c\n",*(char *)vptr2);		//B
	printf("%f\n",*(float *)vptr3);		//B
	

}
