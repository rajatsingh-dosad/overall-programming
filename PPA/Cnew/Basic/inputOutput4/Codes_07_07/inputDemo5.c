//int float char

#include<stdio.h>

void main() {
	
	int x;
	float f;
	char ch;

	printf("Enter values for int\n");
	scanf("%d",&x);

	printf("Enter values for float\n");
	scanf("%f",&f);

	printf("Enter values for char\n");
	scanf(" %c",&ch);

	printf("int=%d\nfloat=%f\nchar=%c\n",x,f,ch);

}
