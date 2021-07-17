
#include<stdio.h>

struct Date {

	int day;
	int month;
	int year;
};

void main() {

	struct Date obj = {3,11,2020};;

	printf("Today's date is : ");

	printf("%d/",obj.day);
	printf("%d/",obj.month);
	printf("%d\n",obj.year);
}


