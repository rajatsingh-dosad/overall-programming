#include<stdio.h>

typedef struct Student {

	int stud_id;
	char* stud_name;
	char stud_grade;
	char stud_mail[20];

}student;

void main() {

	student s1 = {1,"Shruti",'A',"SShruti@gmail.com"};
	student s2 = {2,"Ria",'A',"Ria@gmail.com"};
	
	student *ptr1 = &s1;
	student *ptr2 = &s2;

	
	printf("Student ID:- %d\n",(*ptr1).stud_id);
	printf("Student Name:- %s\n",(*ptr1).stud_name);
	printf("Student grade:- %c\n",(*ptr1).stud_grade);
	printf("Student mail:- %s\n",(*ptr1).stud_mail);

	printf("\n");

	printf("Student ID:- %d\n",(*ptr2).stud_id);
	printf("Student Name:- %s\n",(*ptr2).stud_name);
	printf("Student grade:- %c\n",(*ptr2).stud_grade);
	printf("Student mail:- %s\n",(*ptr2).stud_mail);
		
	
}
