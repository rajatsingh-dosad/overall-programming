

#include<stdio.h>

void main() {

	float principle, time, interest, SI;

	printf("Enter the principle amount, time and interest rate: ");
	scanf("%f%f%f",&principle,&time,&interest);

	SI = (principle*time*interest)/100;

	printf("The simple Interest is %.2f\n",SI);
}
