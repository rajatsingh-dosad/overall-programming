

#include<stdio.h>

void main() {

	int a = 5;
	int b = 10;
	int c = 0;

	if(a && b)		
		printf("Core2Web\n");	//True

	if(b && c)		
		printf("Biencaps\n");	//False

	if(b || c)		
		printf("Amazon\n");	//True
}	
