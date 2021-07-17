
#include<stdio.h>

struct employee {

	int empId;
	char *empName;
	float empSalary;
};

void main() {

	struct employee obj1  = {1,"Ganesh",2000000.52};
	struct employee obj2  = {2,"Ajay",25000000.82};
	struct employee obj3  = {3,"Rohan",15000000.60};

	struct employee arr[3] = {obj1,obj2,obj3};

	printf("\nOUTPUT:\n");
	for(int i=0;i<3;i++) {

		printf("Employee id = %d\n",arr[i].empId);
		printf("Employee Name = %s\n",arr[i].empName);
		printf("Employee id = %.2f\n",arr[i].empSalary);
		printf("\n");
	}
}


