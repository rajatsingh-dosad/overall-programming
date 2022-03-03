
//Reversing by swapping data

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* head = NULL;

void traverse() {

	if(head==NULL) {
		printf("The linkedlist is empty!!!\n");
		return;
	}
	else {

		struct Node* temp = head;
		printf("The linkedList is: ");
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
	node->data= val;
	node->next = NULL;
	return node;
}

void createNode() {

	struct Node* node = getNode();
	struct Node* temp = NULL;
	if(head==NULL)
		head= node;
	else{

		temp = head;
		while(temp->next!=NULL)
			temp = temp -> next;

		temp->next = node;
	}
}	

int countNode() {

	struct Node* temp = head;
	int count = 0;

	while(temp!=NULL) {

		count++;
		temp = temp->next;
	}

	return count;
}

void reverse() {
	
	struct Node* start = head;
	struct Node* end = head;
	int posS = 1;
	int posE = countNode();


	while(posS <= countNode()/2) {

		posE = countNode()+1-posS;
		end = head;
		while(posE-1) {

			end = end->next;
			posE--;
		}

		int temp = start->data;
		start->data = end->data;
		end->data = temp;
		posS++;
		start = start->next;
	}
}

void main() {
	
	int number;
	printf("Enter the number of elements you want to insert in the linkedlist: ");
	scanf("%d",&number);

	for(int i=0;i<number;i++) {

		createNode();
	}

	printf("The linkedList before reversing is:\n");
	traverse();
	printf("The linkedList after reversing is:\n");
	reverse();
	traverse();


	
}
