
// Circular Queue implementation using array

//Since it is a circular queue we will always increment front and rear as 
//front = (front+1)%size or rear = (rear+1)%size
//except for the second if() condition in enqueue

#include <stdio.h>
#define size 5

int front = -1;
int rear = -1;
int arr[size];

int isFull() {
	
	if(front==(rear+1)%size)
		return 1;
	return 0;
}

void enqueue(int x) {

	if(isFull()) {
		printf("THe queue is full!\n");
		return;
	}

	if(front==-1)
		front++;

	rear = (rear+1)%size;
	arr[rear] = x;
}

int isEmpty() {

	if(front==-1 && rear==-1)
		return 1;
	return 0;
}


int dequeue() {

	if(isEmpty()) {

		printf("THe queue is empty!\n");
		return -1;
	}
	
	int val;
	if(front==rear) {

		val = arr[front];
		front = rear = -1;
		return val;
	}

	//Since it is a circular queue we have to increment front in circular fashion
	front = (front+1)%size;
	return arr[front];
}

void display() {

	if(isEmpty()) {
		printf("THE QUEUE IS ALREADY EMPTY!\n");
		return;
	}
	
	printf("THe queue is: \n");
	
	for(int i=front;i!=rear;) {
		
		printf("%d\n",arr[i]);
		i = (i+1)%size;
	}

	printf("%d\n",arr[rear]);
}


void main() {

	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);

	display();

	dequeue();
	
	enqueue(60);

	display();
}
