
#include<stdio.h>

struct Friends {

	char fname[20];
	char type[20];
	char married;
};

void main() {

	struct Friends obj1 = {"Ashish","Shant",'Y'};	
	struct Friends obj2 = {"Kanha","Mastikhor",'N'};	
	struct Friends obj3 = {"Rahul","kide",'N'};	

	struct Friends arr[3] = {obj1,obj2,obj3};

	for(int i=0;i<3;i++) {

		printf("Friend name = %s\n",arr[i].fname);
		printf("Friend type = %s\n",arr[i].type);
		printf("Married status : %c\n",arr[i].married);
		printf("\n");
	}

}
