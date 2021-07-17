

#include<stdio.h>

void main() {

	int h;
	printf("Enter the hour: ");
	scanf("%d",&h);

	int min = h * 60;
	int sec = min * 60;

	printf("%d seconds\n",sec);
}
