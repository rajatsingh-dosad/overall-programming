
// Queue implementation using array

#include <stdio.h>
#define size 5

int front = -1;
int rear = -1;
int arr[size];


// To check whether the queue is empty
int isEmpty() {
	
	if(front==-1 && rear==-1)
		return 1;
	return 0;
}


// To check whether the queue is full
int isFull() {
	
	if(rear==size-1)
		return 1;
	return 0;
}

// To add element in the queue
void enqueue(int x) {

	if(isFull()) {		
		printf("The queue is full\n");
		return;
	}

	//For the initial part when our front  = -1 we increment it by 1
	if(front==-1)
		front++;

	arr[++rear] = x;
	printf("Enqued element: %d\n",x);
}

int dequeue() {

	int val = -1;
	
	if(isEmpty()) {
 		printf("THe queue is empty\n");
		return val;
	}

	//When our rear and front point to same element we first remove the element and now our queue becomes empty hence we initialize front and rear to -1
	if(front==rear) {
		val = arr[front];
		front = rear = -1;
		return val;
	}
	
	//deleting the front element	
	return arr[front++];

}

void display() {

	if(isEmpty()) {
		printf("QUEUE IS EMPTY!\n");
		return;
	}

	printf("The queue is:\n");
	for(int i=front;i<=rear;i++) {
		printf("%d\n",arr[i]);
	}
}

int peek() {

	if(isEmpty()) {

		printf("THe queue is empty\n");
		return -1;
	}
	return arr[front];
}

void main() {

	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	
	display();

	int val = dequeue();
	if(front!=-1 || arr[front+1]==val)
		printf("The deleted element is: %d\n",val);
	else 
		printf("Cannot delete any  element as queue is empty\n");

	printf("The peeked element is: %d\n",peek());

	display();
}
