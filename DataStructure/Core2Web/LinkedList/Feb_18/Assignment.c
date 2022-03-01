
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {

	
	struct Player {
	
		char name[20];
		int age;
	}obj;

	struct Node* next;
};

struct Node* createNode(struct Node* head) {


	struct Node* temp = NULL;
	char n[20];
	int a;
	printf("Enter the name and age of batsmen: ");
	scanf("%s",n);
	scanf("%d",&a);


	struct Node* node = malloc(sizeof(struct Node));
	strcpy(node->obj.name,n);
	node->obj.age = a;
	node->next = NULL;
	
	temp = head;

	if(head==NULL) {
		head = node;
	}
	else {

		while(temp->next!=NULL) {

			temp = temp->next;
		}

		temp->next = node;
	}

	return head;

}

void traverse(struct Node* head) {

	struct Node* temp = head;

	while(temp!=NULL) {

		
		if(temp->next==NULL)
			printf("|%s %d|\n",temp->obj.name,temp->obj.age);
		else
			printf("|%s %d| -> ",temp->obj.name,temp->obj.age);

		temp = temp -> next;

	}
}

void main() {

	struct Node* head = NULL;
	
	int noOfBatsmen;

	printf("Enter the number of batsman: ");
	scanf("%d",&noOfBatsmen);

	for(int i=0;i<noOfBatsmen;i++) {

		head = createNode(head);
	}

	traverse(head);
}
