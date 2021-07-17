

#include<stdio.h>
#include<string.h>

struct Student {

	int stud_roll;
	char *stud_name;
	float stud_fees;
	char *stud_DOB;
}s1,s2,s3;

void main() {
	

	struct Student arr[3] = {s1,s2,s3};

	for(int i=0;i<3;i++) {

		printf("Enter the details of student%d:\n",i+1);
		
		printf("Enter the roll number of student: ");
		scanf("%d",&arr[i].stud_roll);	
		
		printf("Enter the name of student: ");
		scanf("%s",arr[i].stud_name);
		
		fflush(stdin);
		printf("Enter the fees of student: ");
		scanf("%f",&(arr[i].stud_fees));

		printf("Enter the DOB of student: ");
		scanf("%s",arr[i].stud_DOB);

		fflush(stdin);
	}

	s2.stud_roll = 100;
	s2.stud_name = "Kanha";
	s2.stud_DOB = "16/10/1996";

	printf("\n*******************************OUTPUT**********************************\n");
	for(int i=0;i<3;i++) {

		printf("Details of student%d is:\n",i+1);
		printf("Roll no = %d\n",arr[i].stud_roll);
		printf("Name = %s\n",arr[i].stud_name);
		printf("Fees = %.2f\n",arr[i].stud_fees);
		printf("DOB = %s\n\n",arr[i].stud_DOB);
	}
}

		

