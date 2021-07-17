
#include<stdio.h>
int size;

void floatArr(float f[]) {

	float sum = 0;
	for(int i=0;i<size;i++) {

		sum = sum  + f[i];
	}
	printf("Sum of all elements are: %f\n",sum);
}

void charArr(char c[]) {

	for(int i=0;i<size;i++) {

		if(c[i] >='A' && c[i] <='Z')
			c[i] = c[i] + 32;
		else if(c[i] >='a' && c[i] <='z')
			c[i] = c[i] - 32;
	}
	printf("Printing the character arraY: ");
	for(int i=0;i<size;i++) {

		printf("%c ",c[i]);
	}
	printf("\n");
}


void main() {

	printf("Enter the size of array: ");
	scanf("%d",&size);

	float farr[size];
       	char carr[size];

	printf("Enter the number in float array : ");
	for(int i=0;i<size;i++) {

		scanf("%f",&farr[i]);
	}

	printf("Enter the character in character array : ");
	for(int i=0;i<size;i++) {

		scanf(" %c",&carr[i]);
	}
	
	printf("\nOUTPUT:\n");
	void (*fptr1)(float*) = floatArr;
	fptr1(farr);
	void (*fptr2)(char*) = charArr;
	fptr2(carr);
}
