

#include<stdio.h>

void main() {

	int age;
	char sex, maritalStatus;

	printf("Enter your age, sex(M/F) and marital tatus(Y/N): ");
	scanf("%d %c %c",&age,&sex,&maritalStatus);

	if(sex=='F')
		printf("You will work in Urban areas only.\n");
	else if(sex=='M' && (age>=20 && age<=40))
		printf("You can work anywhere.\n");
	else if(sex=='M' && (age>40 && age<=60))
		printf("You will work in Urban areas only.\n");
	else
		printf("Error!\n");
}
