
#include<stdio.h>
#include<string.h>

void main() {
	
	int id;
	char empName[20];
        char compName[20];
	char designation[20];

	printf("Enter the id: ");
	scanf("%d",&id);

	printf("Enter the employee name: ");
	scanf(" %[^\n]",empName);
	
	printf("Enter the company name: ");
	scanf(" %[^\n]",compName);

	printf("Enter the designation: ");
	scanf(" %[^\n]",designation);


	puts("\nOUTPUT:");
	printf("Employee id is %d\n",id);
	printf("Employee  name is %s\n",empName);
	printf("Employee Company's name is %s\n",compName);
	printf("Employee designation is %s\n",designation);
}
