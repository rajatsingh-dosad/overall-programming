
#include<stdio.h>
#pragma pack(1)

struct player {

	int jerNo;
	float avg;
	char grd;
}Rohit = {45,47.52,'A'},Rayudu = {32,43.75,'B'};

void main() {

	struct player Virat = {18,50.52,'A'};

	printf("%p\n",&Virat);		//100
	printf("%p\n",&Virat.jerNo);	//100
	printf("%p\n",&Virat.avg);	//104
	printf("%p\n",&Virat.grd);	//108
	
	printf("\n");
	printf("%p\n",&Rohit);		//200
	printf("%p\n",&Rohit.jerNo);	//200
	printf("%p\n",&Rohit.avg);	//204
	printf("%p\n",&Rohit.grd);	//208
	
	printf("\n");
	printf("%p\n",&Rayudu);		//300
	printf("%p\n",&Rayudu.jerNo);	//300
	printf("%p\n",&Rayudu.avg);	//304
	printf("%p\n",&Rayudu.grd);	//308

}
