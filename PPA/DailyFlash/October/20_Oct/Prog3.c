
#include<stdio.h>
#include<stdbool.h>

bool Neon(int num) {

	int sq = num*num;
	int rem = 0;
	int neon;
	while(sq!=0) {

		rem = sq % 10;
		neon = neon + rem;
		sq = sq / 10;
	}
	if(neon == num)
		return true;
	else 
		return false;
}
		
void main() {

	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	if( Neon(num))
		printf("%d is a Neon number\n",num);
	else
		printf("%d is not a Neon number\n",num);
}
