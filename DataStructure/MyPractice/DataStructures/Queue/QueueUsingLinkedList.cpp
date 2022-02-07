
#include <iostream>
using namespace std;


class QueueUsingLinkedList {
	
	public:
		int data;
		QueueUsingLinkedList *next;
};


QueueUsingLinkedList *r = NULL;
QueueUsingLinkedList *f = NULL;

void display() {
	
	QueueUsingLinkedList *ptr= f;
	while(ptr!=NULL) {

		cout << ptr->data << endl;
		ptr = ptr->next ;
	}
}

void enqueue(int data) {
	
	QueueUsingLinkedList *n = new QueueUsingLinkedList();
	if(n==NULL)
		cout << "Queue is Full" << endl;
	else {

		n->data = data;
		n->next = NULL;

		if(f==NULL && r==NULL) 
			f=r=n;
		else {

			r->next = n;
			r=n;
		}
	}
}

int dequeue() {
	
	int val = -1;
	QueueUsingLinkedList *n = f;
	if(f==NULL)
		cout << "Queue is empty" << endl;
	else {

		f=f->next;
		val = n->data;
		free(n);
	}

	return val;
}

int main() {


	enqueue(10);
	enqueue(20);
	enqueue(30);

	display();

	cout << "Element dequeued is : " << dequeue() << endl;
	
	display();
	return 0;
} 
