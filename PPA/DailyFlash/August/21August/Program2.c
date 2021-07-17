

#include<stdio.h>

void main() {

	int unit, totalBill;
	float unitCharge;

	printf("Enter the unit: ");
	scanf("%d",&unit);
	
	if(unit>0 && unit<50)
		unitCharge=0.50;
	else if(unit>51 && unit<150)
		unitCharge=0.75;
	else if(unit>151 && unit<250)
		unitCharge=1.20;
	else 
		unitCharge=1.50;

	printf("Total electricity bill= Rs %.2f\n",unitCharge*unit);
}
