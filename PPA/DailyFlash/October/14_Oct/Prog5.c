
#include<stdio.h>

void main() {

	int empId,workingDays;
	float salary;

	printf("Enter the empid and number of working days: ");
	scanf("%d%d",&empId,&workingDays);

	printf("Entert the salary: ");
	scanf("%f",&salary);

	void *ptr1 = &empId;
	void *ptr2 = &workingDays;
	void *ptr3 = &salary;


	printf("Employee id is %d\n",*(int *)ptr1);
	printf("Employee salary is %.2f\n",*(float *)ptr3);
	printf("Employee working days are %d\n",*(int *)ptr2);
}
