
//Stack using LinkedList where head will be pointing to first node and top will be pointing to latest added node
//Using AddAtLast() deleteAtLast() - Worst case
//
//Note: When implementing stack using LinkedList the stack will become full only when the heap memory gets full or when memory is not allocated for new node.

#include <stdio.h>
#include <stdlib.h>

struct Node {

	int data;
	struct Node* next;
};

struct Node* head = NULL;
struct Node* top = NULL;

void push(int data) {

	struct Node* node = malloc(sizeof(struct Node));
	if(node==NULL) {

		printf("Stack overflow\n");
		return;
	}


	node->data = data;
	node->next = NULL;

	struct Node* temp = head;

	if(head==NULL)
		head = node;
	else {

		while(temp->next!=NULL)
			temp = temp->next;
		temp->next = node;
	}

	top = node;
}

int pop() {

	int val;

	if(head==NULL) {
		printf("Stack underflow\n");
		return -1;
	}

	if(head==top) {

		val= top->data;
		free(head);
		head = NULL;
		top = NULL;
		return val;
	}

	struct Node* temp = head;
	while(temp->next != top) 
		temp = temp->next;
	val = top->data;
	free(top);
	top = temp;
	return val;
}

void printStack() {

	struct Node* temp = head;
	struct Node* topTemp  = top;

	if(head==NULL) {

		printf("The stack is empty!\n");
		return;
	}

	printf("The stack is:\n");
	while(head!=topTemp) {

		temp = head;
		while(temp->next != topTemp)
			temp = temp->next;
		printf("%d\n",topTemp->data);
		topTemp = temp;
	}

	printf("%d\n",topTemp->data);

}

void main() {

	push(10);
	push(20);
	push(30);

	printStack();
	pop();
	printStack();
}                                                                                                                                                            
