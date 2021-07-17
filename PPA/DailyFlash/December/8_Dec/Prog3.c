
#include<stdio.h>

struct ArmySelection {
	
	char *name;
	float height;
	int age;
};

void main() {

	struct ArmySelection person1 = {"Rakesh",5.9,22};
	
	struct ArmySelection *ptr = &person1;

	printf("Address of the pointer: %p\n",&ptr);
	printf("Value of pointer are:\n");
	printf("%s %f %d\n\n",ptr->name,ptr->height,ptr->age);
	
	printf("Size of structure: %ld\n",sizeof(person1));
	printf("Size of structure pointer: %ld\n",sizeof(ptr));
		
}
