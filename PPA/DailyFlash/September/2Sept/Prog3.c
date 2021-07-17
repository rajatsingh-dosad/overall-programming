

#include<stdio.h>

void main() {

	int dist, time;

	printf("Enter the distance: ");
	scanf("%d",&dist);
	
	printf("Enter the time in seconds: ");
	scanf("%d",&time);

	printf("The velocity of particle roaming in space is %dm/s.\n",dist/time);
}

