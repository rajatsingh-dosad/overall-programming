
#include<stdio.h>

struct university {

	struct collegeDetails {
	
		char cName[20];
		int cId;
	}cd;

	struct studentDetails {

		char sName[20];
		int sAge;
		int sRoll;
	}sd;

};

void main() {

	struct university SavitriBai = {{"RMD",2150},{"Rajat",21,57}};

	struct university *ptr  = &SavitriBai;
	
	printf("College Details:\n");
	printf("College Name = %s\n",ptr->cd.cName);
	printf("College Id = %d\n\n",ptr->cd.cId);
	
	printf("Student Details:\n");
	printf("Student Name = %s\n",ptr->sd.sName);
	printf("Student Age = %d\n",ptr->sd.sAge);
	printf("Student Roll No. = %d\n",ptr->sd.sRoll);
}
