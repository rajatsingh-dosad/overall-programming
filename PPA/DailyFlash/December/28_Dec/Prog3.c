
#include <stdio.h>
#include <string.h>

struct Student {

	int roll_no;
	char name[20];
	int age;
	int marks;
}stud1;

void main() {

	stud1.roll_no = 57;
	strcpy(stud1.name,"Rajat");
	stud1.age = 21;
	stud1.marks = 89;
	
	printf("Roll of student is : %d\n",stud1.roll_no);
	printf("Name of the student is : %s\n",stud1.name);
	printf("Age of the student is : %d\n",stud1.age);
	printf("Marks of the student is : %d\n",stud1.marks);
}
	
