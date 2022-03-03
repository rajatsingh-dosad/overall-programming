
#include <stdio.h>
#include <stdlib.h>

struct Info {

	int age;
	float height;
	struct Info* next;
};

void main() {

	struct Info* head;
	struct Info* temp;
		
	struct Info* node1 = (struct Info*)malloc(sizeof(struct Info));
	node1->age = 25;
	node1->height = 5.7;
	node1->next = NULL;

	head = node1;
	temp = head;

	while(temp!=NULL) {

		printf("%d : %f\n",temp->age, temp->height);
		temp = temp->next;
	}

	printf("*************************\n");

	struct Info* node2 = (struct Info*)malloc(sizeof(struct Info));
	node2->age = 27;
	node2->height = 5.9;
	node2->next = NULL;

	head->next = node2;
	temp = head;
	
	while(temp!=NULL) {

		printf("%d : %f\n",temp->age, temp->height);
		temp = temp->next;
	}
	
	printf("*************************\n");
	
	node2 = (struct Info*)malloc(sizeof(struct Info));
	node2->age = 37;
	node2->height = 5.4;
	node2->next = NULL;

	head->next->next = node2;
	temp = head;
	
	while(temp!=NULL) {

		printf("%d : %f\n",temp->age, temp->height);
		temp = temp->next;
	}
	
	printf("*************************\n");
	
	node2 = (struct Info*)malloc(sizeof(struct Info));
	node2->age = 47;
	node2->height = 6;
	node2->next = NULL;

	head->next->next->next = node2;
	temp = head;
	
	while(temp!=NULL) {

		printf("%d : %f\n",temp->age, temp->height);
		temp = temp->next;
	}
}
