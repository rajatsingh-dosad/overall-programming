

#include<stdio.h>

void main() {

	int m1,m2,m3,m4,m5;
	int avg;
	printf("Enter the marks of Physics,Chemistry,Maths,Science and History out of 50\n");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	
	if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35) {

		avg=(m1+m2+m3+m4+m5)/5;
		printf("Average marks=%d\n",avg);

		switch(avg/5) {

			case 9:
				printf("First class\n");
				break;

			case 8:
				printf("Second class\n");
				break;

			case 7:
				printf("Third class\n");
				break;

			case 6:
				printf("Fourth class\n");
				break;

			default:
				printf("Pass class\n");
				break;
		}
	}
	else {
		printf("You failed in exam\n");
	}
}
/*Here we have said that enter marks out of 50 for 5 subjects and we have given a condition that if marks in per subject is greater than 35 we have added them and remove average of it. and we have provided that average in switch(avg/5) and given the cases.If any one of the subject has marks less than 35 we direct print "Fail" in else block */
