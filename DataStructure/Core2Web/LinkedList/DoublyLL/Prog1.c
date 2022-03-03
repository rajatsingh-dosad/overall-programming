
#include <stdio.h>
#include <stdlib.h>

struct Node {

	struct Node* prev;
	int data;
	struct Node* next;
};

struct Node* head = NULL;

struct Node* getNode() {

	int val;
	printf("Enter data: ");
	scanf("%d",&val);

	struct Node* node = malloc(sizeof(struct Node));
	node->prev = NULL;
	node->data = val;
	node->next = NULL;
}

void createNode() {

	struct Node* node = getNode();
	struct Node* temp = NULL;
	if(head==NULL)
		head = node;
	else {
		temp = head;

		while(temp->next!=NULL)
			temp = temp->next;
		
		node->prev = temp;
		temp->next = node;
	}
}

void traverse() {

	if(head==NULL) {
		printf("LinkedList is empty!!!\n");
		return;
	}

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

void reverseTraverse() {

	if(head==NULL) {
		printf("LinkedList is empty!!!\n");
		return;
	}

	struct Node* temp = head;
	while(temp->next!=NULL) {
		temp = temp->next;
	}

	printf("LinkedList in reverseOrder is: ");
	while(temp!=NULL) {
		if(temp->prev==NULL)
			printf("|%d|\n",temp->data);
		else
			printf("|%d| -> ",temp->data);
		
		temp = temp->prev;
	}
}

int countNode() {

	int count  = 0;
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

		struct Node* temp = head;
		node->next = head;
		temp->prev = node;
		head = node;
	}
}

void addAtEnd() {

		struct Node* node = getNode();
		if(head==NULL)
			head = node;
		else {
			struct Node* temp = head;
			while(temp->next!=NULL)
				temp = temp->next;
			temp->next = node;
			node->prev = temp;
		}
}

void addAtPos(int pos) {

	if(pos==1)
		addAtBeg();
	else if(pos==countNode()+1)
		addAtEnd();
	else if(pos>countNode()+1 || pos<=0)
		printf("You entered invalid position!!!\n");
	else {

		struct Node* node = getNode();
		struct Node* temp = head;
		while(pos-2) {
			temp = temp->next;
			pos--;
		}

		//Compulsory first bind newNode to temp and temp->next, you will never get problem in future
		node->next = temp->next;
		node->prev = temp;
		
		//Then bind temp and temp->next to newNode
		temp->next->prev = node;
		temp->next = node;
		
	}
}


void deleteAtBeg() {

	if(head==NULL) {
		printf("The linkedList is already empty!!!\n");
		return;
	}

	struct Node* temp = head;
	head = temp->next;
	head->prev = NULL;
	free(temp);
}

void deleteAtEnd() {

	if(head==NULL) {
		printf("The linkedList is already empty!!!\n");
		return;
	}

	if(countNode()==1) {
		free(head);
		head = NULL;
		return;
	}

	struct Node* temp = head;
	while(temp->next!=NULL) {
		temp = temp->next;
	}

	temp->prev->next = NULL;
	free(temp);
}

void deleteAtPos(int pos) {

	if(head==NULL) {
		printf("The LinkedList is already empty!!!\n");
		return;
	}

	if(pos==1)
		deleteAtBeg();
	else if(pos==countNode())
		deleteAtEnd();
	else if(pos>countNode())
		printf("You entered an invalid position!!!\n");
	else {

		struct Node* temp = head;
		while(pos-1) {
			temp = temp->next;
			pos--;
		}
		temp->prev->next = temp->next;
		temp->next ->prev = temp->prev;
		free(temp);
	}
}

void main() {

	int number;
	printf("Enter the number of elements you want to insert in the LL: ");
	scanf("%d",&number);

	for(int i=0;i<number;i++) {
		createNode();
	}

	printf("Adding at beginning:\n");
	addAtBeg();

	printf("Adding at End:\n");
	addAtEnd();

	traverse();

	int pos;
	printf("Adding at Pos:\n");
	printf("Enter pos to add: ");
	scanf("%d",&pos);
	addAtPos(pos);

	traverse();
	reverseTraverse();

	deleteAtBeg();
	traverse();

	deleteAtEnd();
	traverse();

	printf("Deleting at Pos:\n");
	pos;
	printf("Enter pos to delete: ");
	scanf("%d",&pos);
	deleteAtPos(pos);
	traverse();
}
