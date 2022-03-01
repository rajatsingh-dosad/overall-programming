

//Take input from user in ascending order. If the input is already present in the list then don't insert else insert at proper position
//e.g i/p: 10 20 30 40
//	data : 25
//    o/p: 10 20 25 30 40

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

struct Node* getNodeForVal(int val) {

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

int countNode() {

	int count = 0;
	struct Node* temp = head;

	while(temp!=NULL) {

		count++;
		temp = temp->next;
	}	

	return count;
}

void addAtBeg(int val) {

	struct Node* node = getNodeForVal(val);

	if(head==NULL)
		head = node;
	else {

		node->next = head;
		head = node;
	}
}

void addAtEnd(int val) {

	struct Node* node = getNodeForVal(val);
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

void addAtPos(int pos,int val) {

	if(head==NULL) {
		printf("Empty List!\n");
		return;
	}

	if(pos==1)
		addAtBeg(val);
	else if(pos==countNode()+1)
		addAtEnd(val);
	else if(pos>countNode()+1 || pos<=0)
		printf("Position %d is a invalid position\n",pos);
	else {

		struct Node* node = getNodeForVal(val);
		struct Node* temp = head;
		while(pos-2) {

			temp = temp->next;
			pos--;
		}

		node->next = temp->next;
		temp->next = node;
	}
}

void insertElement(int val) {

	int flag = 0;
	struct Node* temp = head;
	int pos = 1;

	while(temp!=NULL) {

		if(temp->data==val) {
			flag = 1;
			break;
		}
		else if(temp->data < val){
			flag = 0;
			pos++;
		}
		temp = temp -> next;
	}

	if(flag == 1)
		printf("The data cannot be inserted as it is already present\n");
	else {
		
		addAtPos(pos,val);
		printf("The data is inserted successfully\n");
	}
}

void main() {

	int number;
	printf("Enter the number of elements you want to insert: ");	
	scanf("%d",&number);

	for(int i=0;i<number;i++) {

		createNode();
	}

	traverse();

	int data;
	printf("Enter the data you want to insert in the present list: ");
	scanf("%d",&data);

	insertElement(data);

	traverse();
}
