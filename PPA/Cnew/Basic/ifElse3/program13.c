

#include<stdio.h>

void main() {
	

	int n1, n2, n3;			
	printf("Enter the three numbers.\n");
	scanf("%d %d %d",&n1,&n2,&n3);		//if n1=12 ,n2=20 ,n3=40

	if(n1 >= n2 && n1 >= n3){		//false
		printf("Largest number: %d",n1);
	}
	if(n2 >= n1 && n2 >= n3){		//false
		printf("Largest number: %d",n2);
	}
	if(n3 >= n1 && n3 >= n2) {		//Condition becomes true as n3 is greater than n1 and n2.
		printf("Largest number: %d",n3);
	}
}
