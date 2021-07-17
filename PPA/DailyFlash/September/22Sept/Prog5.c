
#include<stdio.h>

void main() {

	int empId, empAge,empSal;
	printf("Enter the id, age and salary: ");
	scanf("%d %d %d",&empId,&empAge,&empSal);

	int *idptr = &empId;
	int *ageptr = &empAge;
	int *salptr = &empSal;
	
	printf("Employee id is %d\n",*idptr);
	printf("Employee age is %d\n",*ageptr);
	printf("Employee salary is %d\n",*salptr);
}
