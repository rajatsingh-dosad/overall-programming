

#include<stdio.h>

void main() {

	float pMrk, cMrk, bMrk, mMrk, comMrk, per, total;
	char grade;

	printf("Enter the marks in physics , chemistry, biology, mathematics and Computert out of 100: ");
	scanf("%f%f%f%f%f",&pMrk,&cMrk, &bMrk, &mMrk, &comMrk);

	total =pMrk+cMrk+bMrk+mMrk+comMrk;
	per=(total/500)*100;

	if(per>=90)
		printf("Grade A\n");
	else if(per>=80)
		printf("Grade B\n");
	else if(per>=70)
		printf("Grade C\n");
	else if(per>=60)
		printf("Grade D\n");
	else if(per>=40)
		printf("Grade E\n");
	else if(per<40)
		printf("Grade F\n");
}

	 


