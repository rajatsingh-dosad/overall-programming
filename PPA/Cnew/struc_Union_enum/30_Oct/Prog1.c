
#include<stdio.h>
#pragma pack(1)

struct player {

	int jerNo;
	float avg;
	char grade;
};

void main() {
	
	struct player virat = {18,50.52,'A'};
	struct player rayadu = {32,43.75,'B'};

	printf("%d\n",virat.jerNo);	
	printf("%f\n",virat.avg);	
	printf("%c\n",virat.grade);	
	
	printf("%d\n",rayadu.jerNo);	
	printf("%f\n",rayadu.avg);	
	printf("%c\n",rayadu.grade);	

}	
