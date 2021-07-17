

#include<stdio.h>

void main() {

	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;

	printf("Enter the 10 numbers: ");
	scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
	
	printf("Sum of 10 numbers is : %d\n",n1+n2+n3+n4+n5+n6+n7+n8+n9+n10);
	printf("Average of 10 numbers is : %.2f\n",((float)n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10);
}
