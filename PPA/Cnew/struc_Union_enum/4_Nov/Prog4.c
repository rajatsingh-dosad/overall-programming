
#include<stdio.h>

union Batsman {
	
	int jerNo;
	double avg;

};

void main() {
	
	union Batsman msd = {7,49.50};

	printf("%d\n",msd.jerNo);
	printf("%f\n",msd.avg);
}
