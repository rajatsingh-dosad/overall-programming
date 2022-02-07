
#include <iostream>

using namespace std;

class Circular {
	
	public:
		int size;
		int front;
		int rare;
		int arr[6];
};

int isEmpty(Circular *c) {
	
	if(c->front == c->rare) 
		return 1;
	return 0;
}

int isFull(Circular *c) {

	if(((c->rare+1)%c->size) == c->front)
		return 1;
	return 0;
}

void enqueue(Circular *c,int data) {
	
	if(isFull(c))
		cout << "Queue Overflow" << endl;
	else {

		c->rare = (c->rare+1)%c->size;
		c->arr[c->rare] = data;
	}
}

int dequeue(Circular *c) {
	
	int a = -1;
	if(isEmpty(c))
		cout << "Queue underFlow" << endl;
	else {
		c->front = (c->front+1)%c->size;
		a = c->arr[c->front];

	}
	return a;
}

void display(Circular *c) {

	for(int i=c->front;i<=c->rare;i++) {

		cout << c->arr[i] << endl;
	}
}

int main() {
	
	Circular *c = new Circular();
	c->size = 6;
	c->front = 0;
	c->rare = 0;
	
	cout << "Queue created successfully" << endl;

	enqueue(c,10);
	enqueue(c,20);
	enqueue(c,30);
	enqueue(c,40);
	enqueue(c,50);
		
	cout << "Printing after inserting" << endl;
	display(c);
	
	dequeue(c);
	dequeue(c);
	dequeue(c);
	dequeue(c);
	dequeue(c);

	cout << "\nPrinting after deleting" << endl;
	display(c);

	return 0;
}
