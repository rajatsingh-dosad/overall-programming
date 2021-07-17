
#include<stdio.h>

union Batsman {
	
	char pName[50];
	int jerNo;
	double avg;

}msd;

void main() {
	
	printf("%ld\n",sizeof(msd));			//16
	printf("%ld\n",sizeof(union Batsman));		//16
}
