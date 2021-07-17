
#include<stdio.h>
#include<stdbool.h>

bool angle(int arr[]) {
	
	int ang = 0;
	for(int i=0;i<3;i++) {
		
		ang = ang + arr[i];
	}
	if(ang==180)
		return true;
	else 
		return false;
}

void main() {


	int arr[3];

	printf("Ente the angle of triangle: ");
	for(int i=0;i<3;i++) {

		scanf("%d",&arr[i]);
	}

	if(angle(arr))
		printf("It is a triangle\n");
	else
		printf("It is not a triangle\n");
}
