
#include <iostream>
using namespace std;

class Queue {
	public:
		int size;
		int front;
		int back;
		int arr[30];
};

int isEmpty(Queue *q) {

	if(q->front == q->back)
		return 1;
	return 0;
}

int isFull(Queue *q) {

	if(q->back == q->size-1)
		return 1;
	return 0;
}

void enqueue(Queue *q,int data) {

	if(isFull(q)) {
		cout << "Queue is full" << endl;
	}
	else {
		q->back = q->back + 1;
		q->arr[q->back] = data;
	}
}

void dequeue(Queue *q) {

	if(isEmpty(q))
		cout <<"Queue is empty" << endl;
	else
		q->front = q->front + 1;
}

void display(Queue *q) {

	for(int i=q->front+1;i<=q->back;i++) {

		cout << q->arr[i] << endl;
	}
}

int main() {

	Queue *q = new Queue();
	q->size = 30;
	q->front = -1;
	q->back = -1;

	cout << "Queue created successfully" << endl;

	enqueue(q,10);
	enqueue(q,20);
	enqueue(q,30);
	enqueue(q,40);
	enqueue(q,50);
	enqueue(q,60);

	cout << "Queue after inserting is" << endl;
	display(q);

	cout << "Queue after deleting first element is : "<<endl;
	dequeue(q);
	dequeue(q);
	display(q);

	return 0;
}
