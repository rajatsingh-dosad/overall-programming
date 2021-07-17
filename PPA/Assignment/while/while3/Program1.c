

#include<stdio.h>
void main(void) {
	
	int number;
	int sum=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	int num=number;
	while(num!=0) {
		int i =num%10;
		
		int mul=1;
		while(i!=0) {

			mul*=i;
			i--;
		}
		sum+=mul;
	


			


		num=num/10;
}
	if(number==sum)
		printf("%d is Strong number\n",number);
	else
		printf("%d is not a Strong number\n",number);



}
	
