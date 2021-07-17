
#include<stdio.h>

struct PuneItSector {
	
	char cmpName[20];
	char cmpFounder[20];
	int numEmp;
	float profit;
	double turnOver;
}obj1,obj2,obj3,obj4,obj5;

void main() {
	
	struct PuneItSector ITcomp[] = {obj1,obj2,obj3,obj4,obj5};
	
	for(int i=0;i<5;i++) {
		
		printf("Enter the information for Company%d:\n",i+1);
	
		printf("Enter the Name of the Comapany: ");
		scanf("%s",ITcomp[i].cmpName);
	
		printf("Enter the Name of Founder of Comapany: ");
		scanf("%s",ITcomp[i].cmpFounder);
	
		printf("Enter the number of Employees: ");
		scanf("%d",&ITcomp[i].numEmp);
	
		printf("Enter the profit of the Company: ");
		scanf("%f",&ITcomp[i].profit);
	
		printf("ENter the turnOver of the Company: ");
		scanf("%lf",&ITcomp[i].turnOver);
		printf("\n");
	}

	printf("*********************************OUTPUT:**************************************\n");
	for(int i=0;i<5;i++) {
	
		printf("INFORMATION OF COMPANY%d:\n",i+1);
		printf("Name of the company is %s\n",ITcomp[i].cmpName);
		printf("Name of the company's Founder is %s\n",ITcomp[i].cmpFounder);
		printf("Number of Employees are %d\n",ITcomp[i].numEmp);
		printf("Profit of Company is %.2f\nn",ITcomp[i].profit);
		printf("TurnOver of the company is %.2lf\n\n",ITcomp[i].turnOver);
	}
}
