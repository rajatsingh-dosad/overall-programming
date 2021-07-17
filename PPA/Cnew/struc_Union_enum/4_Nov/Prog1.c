
#include<stdio.h>

struct Company {
	
	struct FrontEnd {
		
		int teamSize;
		char tech[20];
	}fend;

	struct BackEnd {
		
		int teamSize;
		char tech[20];
	}bend;

	
	struct Devops {
		
		int teamSize;
		char service[20];
	}dops;
};

void main() {
	
	struct Company bielearn = {{3,"ReactJS"}, {2,"SpringBoot"}, {2 ,"AWS"}};

	printf("Front End:\n");
	printf("%d %s\n",bielearn.fend.teamSize,bielearn.fend.tech);
	
	printf("Back End:\n");
	printf("%d %s\n",bielearn.bend.teamSize,bielearn.bend.tech);
	
	printf("Devops:\n");
	printf("%d %s\n",bielearn.dops.teamSize,bielearn.dops.service);
}











