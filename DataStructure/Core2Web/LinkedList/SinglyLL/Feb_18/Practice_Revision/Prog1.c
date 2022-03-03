
#include <stdio.h>
#include <stdlib.h>

struct Node {

	int data;
	struct Node* next;	//self-referential structure
};

struct Node* head = NULL;

void traverse() {

	if(head==NULL)
		printf("LinkedList is: [Empty]!\n");

	else {
		struct Node* temp = head;
		
		printf("LinkedList is: ");
		while(temp!=NULL) {

			if(temp->next==NULL)
				printf("|%d|\n",temp->data);
			else
				printf("|%d| -> ",temp->data);
			temp = temp->next;
		}
	}
}

struct Node* getNode() {

	int val;
	printf("Enter data: ");
	scanf("%d",&val);

	struct Node* node = malloc(sizeof(struct Node));
	node->data = val;
	node->next = NULL;

	return node;
}

int countNode() {

	int count = 0;
	struct Node* temp = head;

	while(temp!=NULL) {

		count++;
		temp = temp->next;
	}	

	return count;
}

void addAtBeg() {

	struct Node* node = getNode();

	if(head==NULL)
		head = node;
	else {

		node->next = head;
		head = node;
	}
}

void addAtEnd() {

	struct Node* node = getNode();
	struct Node* temp = NULL;
	if(head==NULL)
		head  = node;
	else {

		temp = head;
		while(temp->next != NULL)
			temp = temp->next;

		temp->next = node;
	}
}

void addAtPos(int pos) {

	if(head==NULL) {
		printf("Empty List!\n");
		return;
	}

	if(pos==1)
		addAtBeg();
	else if(pos==countNode()+1)
		addAtEnd();
	else if(pos>countNode()+1 || pos<=0)
		printf("Position %d is a invalid position\n",pos);
	else {

		struct Node* node = getNode();
		struct Node* temp = head;
		while(pos-2) {

			temp = temp->next;
			pos--;
		}

		node->next = temp->next;
		temp->next = node;
	}
}

void deleteAtBeg() {

	if(head==NULL)
		printf("LinkedList is already empty!\n");
	else {

		struct Node* temp = head;
		head = head->next;
		free(temp);
	}
}

void deleteAtEnd() {

	if(head==NULL)
		printf("LinkedList is already empty!\n");
	else if(countNode()==1) {
		free(head);
		head = NULL;
	}
	else {

		struct Node* temp = head;
		while(temp->next->next!=NULL)
			temp = temp->next;

		free(temp->next);
		temp->next = NULL;
	}
}

void deleteAtPos(int pos) {

	if(head==NULL) {
		printf("Empty List!\n");
		return;
	}

	if(pos==1)
		deleteAtBeg();
	else if(pos==countNode())
	        deleteAtEnd();	
	else if(pos>countNode() || pos<=0)
		printf("Invalid position!\n");
	else {

		struct Node* temp = head;
		while(pos-2) {

			temp  = temp->next;
			pos--;
		}

		struct Node* temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
	}
}

void main() {

	printf("Adding node at the beginning:\n");
	addAtBeg();
	addAtBeg();
	printf("Adding node at the end:\n");
	addAtEnd();
	addAtEnd();

	traverse();
	int pos;

	printf("Adding node at pos:\n");
	printf("Enter pos: ");
	scanf("%d",&pos);
	addAtPos(pos);

	traverse();
	
	printf("Deleting node from beginning:\n");
	deleteAtBeg();
	traverse();
	

	printf("Deleting node from end:\n");
	deleteAtEnd();
	traverse();

	printf("Deleting node from pos:\n");
	printf("Enter pos: ");
	scanf("%d",&pos);
	deleteAtPos(pos);
	traverse();


}
