
//Stack using LinkedList where top will be pointing to the latest added node
//Using addAtBeg() deleteAtBeg()
//
//
// Note: When implementing stack using LinkedList the stack will become full only when the heap memory gets full or when memory is not allocated for new node.


#include <stdio.h>
#include <stdlib.h>

struct Node {

	int data;
	struct Node* next;
};

struct Node* top = NULL;

void push(int data) {


	struct Node* node = malloc(sizeof(struct Node));

	if(node==NULL) {

		printf("Stack Overflow!\n");
		return;
	}

	node->data = data;
	node->next = NULL;

	if(top==NULL)
		top = node;
	else {

		node->next = top;
		top = node;
	}
}

int pop() {

	int val;

	if(top==NULL) {
		printf("Stack underflow\n");
		return -1;
	}	

	struct Node* temp = top;
	val = temp->data;
	top = top->next;
	free(temp);
	return val;
}

void printStack() {

	if(top==NULL) {

		printf("The stack is empty!\n");
		return;
	}

	struct Node* temp = top;
	printf("The stack is:\n");
	while(temp!=NULL) {

		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

void main() {

	push(10);
	push(20);
	push(30);

	printStack();
	pop();
	printStack();
}



