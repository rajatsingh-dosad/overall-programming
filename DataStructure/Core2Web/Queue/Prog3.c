
//Implementing queue using LinkedList

#include <stdio.h>
#include <stdlib.h>
	
struct Node {

	int data;
	struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int x) {

	struct Node* node = malloc(sizeof(struct Node));
	if(node==NULL) {
		printf("The queue is full\n");
		return;
	}

	node->data = x;
	node->next = NULL;

	if(front==NULL && rear==NULL) {
		front = node;
		rear = node;
	}
	else {
		rear->next= node;
		rear = node;
	}
}

int dequeue() {

	if(front==NULL) {

		printf("The queue is empty!\n");
		return -1;
	}

	int val;
	if(front==rear) {
		
		val = front->data;
		front = NULL;
		rear = NULL;
		return val;
	}

	struct Node* temp = front;
	front = front->next;
	free(temp);
}

void display() {

	if(front==NULL) {
		printf("The queue is empty:\n");
		return;
	}

	struct Node* temp = front;
	printf("The queue is: \n");
	while(temp!=NULL) {

		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

void main() {

	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);

	display();

	dequeue();

	display();
}
