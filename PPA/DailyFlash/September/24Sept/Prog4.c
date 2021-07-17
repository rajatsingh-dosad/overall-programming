
#include<stdio.h>

void main() {

	int year,roll,number=0;
	char backlog;

	printf("Enter your year(1/2/3/4), roll number: ");
	scanf("%d %d",&year,&roll);

	printf("Do you have backlogs(y/n): ");
	scanf(" %c",&backlog);

	if(backlog=='y') {

		printf("Enter the number of backlogs: ");
		scanf("%d",&number);
	}

	int *yearptr = &year;
	int *rollptr = &roll;
	int *numberptr = &number;
	char *backlogptr = &backlog;

	printf("Student year is %d\n",*yearptr);
	printf("Student roll number is %d\n",*rollptr);
	printf("Student has backlog: %c\n",*backlogptr);
	printf("Student's backlog are %d\n",*numberptr);
}


