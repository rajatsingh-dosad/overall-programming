

#include<stdio.h>

void main() {

	int num;
	printf("Enter a number to get the table for it\n");
	scanf("%d",&num);					//e.g 3

	for(int i=1;i<=10;i++) {				

		printf("%d x %d = %d\n",num,i,num*i);	//num x i = num*i   i.e 3 x 1 = 3 and so on

	}
}
