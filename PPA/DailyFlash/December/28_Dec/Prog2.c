
#include <stdio.h>

struct UserPersonalDetails {

	struct ImpDetails {

		char username[20];
		char user_id[20];

	}imp;

	struct NormalDetails {

		int weight;
		int age; 
		char gender;
	}nrm;

};

void main() {
	
	struct UserPersonalDetails user = {{"abcd@gmail","User210245"},{70,25,'M'}};

	struct UserPersonalDetails *ptr = &user;

	printf("Username of user : %s\n",ptr->imp.username);
	printf("User ID of user : %s\n",ptr->imp.user_id);
	printf("Weight of user: %d\n",ptr->nrm.weight);
	printf("Age of user: %d\n",ptr->nrm.age);
	printf("Gender of user: %c\n",ptr->nrm.gender);
}

	
