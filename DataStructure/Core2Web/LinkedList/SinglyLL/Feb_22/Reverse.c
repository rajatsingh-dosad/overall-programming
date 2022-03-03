
// Reversing a LL has two ways:
// 1) Swapping data
// 	10 -> 20 -> 30 -> 40 -> NULL
//	100   200   300   400	
// 2) Inplace reverse
// 	NULL <- 10 <- 20 <- 30 <- 40 
// 		100   200   300   400
//


// Inplace Reverse

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

void createNode() {

	struct Node* node = getNode();

	struct Node* temp = NULL;
	if(head==NULL)
		head = node;
	else {

		temp = head;
		while(temp->next!=NULL) {

			temp = temp->next;
		}

		temp->next = node;
	}
}


void reverse() {

    // struct Node* temp1 = head;
    // struct Node* temp2 = head->next;
	// temp1->next = NULL;

    // while(temp2!=NULL) {
	// 	temp1 = temp2;
	// 	temp2 = temp2->next;
	// 	temp1->next = head;
	// 	head = temp1;
    // }

	struct Node* prev = NULL;
	struct Node* curr = head;
	struct Node* next = NULL;

	while(curr!=NULL) {
		next= curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
}

void main() {

    int number;
	printf("Enter the number of elements you want to insert: ");	
	scanf("%d",&number);

	for(int i=0;i<number;i++) {

		createNode();
	}

    printf("The linkedList before reversing:\n");
	traverse();

    reverse();

    printf("The linkedList after reversing:\n");
    traverse();

}
