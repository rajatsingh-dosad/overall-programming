
#include<stdio.h>

struct Hospital {
	
	char hospitalName[20];
	int noOfBeds;
	int noOfVentilators;
	int patientCount;
};

void main() {

	struct Hospital obj1 = {"Sancheti",20,5,19};
	struct Hospital obj2 = {"Ratna",35,9,32};
	struct Hospital obj3 = {"City Hospital",48,20,46};

	struct Hospital arr[] = {obj1,obj2,obj3};
	
	printf("OUTPUT:\n");
	for(int i=0;i<3;i++) {
	
		printf("Name of the Hospital = %s\n",arr[i].hospitalName);
		printf("Number of beds = %d\n",arr[i].noOfBeds);
		printf("Number of Ventilators = %d\n",arr[i].noOfVentilators);
		printf("Number of Patient = %d\n\n",arr[i].patientCount);
	}
}
