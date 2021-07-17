
#include <stdio.h>

#define id 10

void main() {
	

	#if(id<0)
		#error: Error id is negative!
	#else
		{

			char name[20];
			float salary;

			printf("Enter the name of employee: ");
			scanf("%s",name);

			printf("Enter the salary of employee: ");
			scanf("%f",&salary);
			
			printf("\nOUTPUT:\n");
			printf("The name of the employee is %s\n",name);
			printf("The id of employee is %d\n",id);
			printf("The salary of employee is %.2f\n",salary);

		}
	#endif
}
