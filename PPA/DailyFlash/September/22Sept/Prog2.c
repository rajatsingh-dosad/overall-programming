
#include<stdio.h>

void main() {

	int roll1,roll2,roll3;
	int pin1,pin2,pin3;

	printf("Enter the roll number and pincode of the city for student1: ");
	scanf("%d %d",&roll1,&pin1);
	int *rollptr1 = &roll1;
	int *pinptr1 = &pin1;
	
	printf("Enter the roll number and pincode of the city for student2: ");
	scanf("%d %d",&roll2,&pin2);
	int *rollptr2 = &roll2;
	int *pinptr2 = &pin2;

	printf("Enter the roll number and pincode of the city for student3: ");
	scanf("%d %d",&roll3,&pin3);
	int *rollptr3 = &roll3;
	int *pinptr3 = &pin3;

	printf("\nOutput: \n");
	printf("Roll no:%d , Pincode: %d\n",*rollptr1,*pinptr1);
	printf("Roll no:%d , Pincode: %d\n",*rollptr2,*pinptr2);
	printf("Roll no:%d , Pincode: %d\n",*rollptr3,*pinptr3);
}
