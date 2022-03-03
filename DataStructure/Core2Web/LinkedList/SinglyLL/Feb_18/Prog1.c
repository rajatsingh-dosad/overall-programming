
#include <stdio.h>
#include <stdlib.h>

//Creating head pointer globally


struct Node {

	int data;
	struct Node* next;
};

struct Node* head = NULL;

void printNode() {

	struct Node* temp = head;

	if(head==NULL)
		printf("The linkedlist is empty!\n");

	while(temp!=NULL) {

		if(temp->next == NULL)
			printf("|%d|\n",temp->data);
		else
			printf("|%d|->",temp->data); 
		temp = temp->next;
	}
}	


void addAtBeg() {

	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

	printf("Enter data: ");
	int val;
	scanf("%d",&val);

	temp->data = val;
	temp->next = head;
	head = temp;
}

void addAtEnd() {

	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter data: ");
	int val;
	scanf("%d",&val);

	node->data = val;
	node->next = NULL;

	struct Node* temp = head;

	while(temp->next!=NULL) {

		temp = temp->next;		
	}

	temp->next = node;

}

int count() {

	struct Node *temp = head;
	int count = 0;

	while(temp!=NULL) {

		count++;
		temp = temp->next;
	}	

	return count;
}

void insertAtPos(int pos) {


	//Since our list starts with one we exclude 0 for position

	if(pos<1)
		printf("Position can't be less than 0\n");
	else if(pos == 1)
		addAtBeg();
	else if(pos>count()+1)
		printf("You entered pos greater than elements present. The elements in the linkedlist are %d\n",count());
	//else if(pos==count()+1)	// No need of this condition as the below code satisfies this condition as temp->next is NULL
	//				//But this condition should be written
	//	addAtEnd();
	else {

		struct Node* node = malloc(sizeof(struct Node));
		printf("Enter data: ");
		int val;
		scanf("%d",&val);
		node->data = val;
		node->next = NULL;

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

	struct Node* temp = head;
	head = head->next;

	free(temp);
}

void deleteAtEnd() {

	//If only one node is present then the below code in while loop condition gives segmentation fault

	if(count()==1) {
		free(head);
		head = NULL;
	}

	else {
		
		struct Node* temp = head;

		while(temp->next->next!=NULL) {

			temp = temp->next;
		}		

		free(temp->next);
		temp->next = NULL;
	}
}

void deleteAtPos(int pos) {

	if(pos<1)
		printf("Position can't be less than 1\n");
	else if(pos==1)
		deleteAtBeg();
	else if(pos>=count()+1)
		printf("You entered pos greater then the elements present. THe elements present are %d\n",count());
	else {

		struct Node* temp = head;
		while(pos-2) {

			temp = temp->next;
			pos--;
		}		

		struct Node* temp2 = temp->next;
		temp->next = temp2->next;

		free(temp2);
	}	

}

void main() {

	struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));

	printf("Enter data: ");
	int val;
	scanf("%d",&val);

	node1->data = val;
	node1->next = NULL;

	head = node1;

	//1.printNode()
	//printNode();

	//2.addAtBeg()
	addAtBeg();

	//3.addAtEnd()
	addAtEnd();

	printNode();

	//4.count()
	int cnt = count();
	printf("The number of elements are: %d\n",cnt);

	//5.insertAtPos(pos)
	printf("Enter the position you want to add the data: ");
	int pos;
	scanf("%d",&pos);
	insertAtPos(pos);
	printNode();

	//6.deleteAtBeg
	deleteAtBeg();
	printNode();

	//7.deleteAtEnd
	deleteAtEnd();
	printNode();

	//8.deleteAtPos(pos)
	printf("Enter the pos to delete the node: ");
	scanf("%d",&pos);
	deleteAtPos(pos);
	printNode();

}
