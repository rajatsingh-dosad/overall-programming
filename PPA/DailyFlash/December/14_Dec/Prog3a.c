
#include<stdio.h>

int num;
int sqret();
void input() {
	
	printf("Enter the number: ");
	scanf("%d",&num);
}

void output() {

	printf("The number after squaring is : %d\n",num);
}

void main() {
	
	input();
	sqret();
	output();	

}
