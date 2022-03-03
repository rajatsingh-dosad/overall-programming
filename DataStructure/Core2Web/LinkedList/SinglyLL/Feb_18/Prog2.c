
#include <stdio.h>
#include <stdlib.h>

//Creating head pointer in main function & passing address of head(&head) in functions

struct Node {

	int data;
	struct Node* next;
};

void printNode(struct Node** head) {

	struct Node* temp = *head;	//one '*' makes double pointer to single pointer

	while(temp!=NULL) {

		if(temp->next == NULL)
			printf("|%d|\n",temp->data);
		else
			printf("|%d|->",temp->data); 
		temp = temp->next;
	}
}	


void addAtBeg(struct Node** head) {

	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = 20;
	temp->next = *head;
 	*head = temp;
}

void main() {
	
	struct Node* head = NULL;

	struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));

	head = node1;

	node1->data = 10;
	node1->next = NULL;

	//1.printNode(&head)
	printNode(&head);

	//2.addAtBeg(&head)
	
	addAtBeg(&head);
	printNode(&head);

}
