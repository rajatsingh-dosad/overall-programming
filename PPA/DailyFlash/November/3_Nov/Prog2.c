
#include<stdio.h>

struct Movie {

	char *mvName;
	int mvDate;
	float ticketPrice;
	char theatreWing;
};

void main() {

	struct Movie obj = {"KGF2",5,180.5,'B'};

	struct Movie arr[] = {obj};

	for(int i=0;i<1;i++) {

		printf("Movie Name = %s\n",obj.mvName);
		printf("Movie Date = %d\n",obj.mvDate);
		printf("Movie Price = %f\n",obj.ticketPrice);
		printf("Theatre wing = %c\n",obj.theatreWing);
	}
}
		
	
