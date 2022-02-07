
#include <iostream>
using namespace std;

class Stack {
	
	public:
		int data;
		Stack *next;
};


Stack *head = NULL;		//wrote global so we don't have to pass address in pop function

int isFull(Stack *top) {

	Stack *temp = new Stack();
	if(temp==NULL)
		return 1;
	else 
		return 0;
}


int isEmpty(Stack *top) {

	if(top==NULL)
		return 1;
	else 
		return 0;
}

Stack *push(Stack *top,int data) {

	if(isFull(top))
		cout <<"Stack overflow" << endl;
	else {

		Stack *temp = new Stack();
		temp->data = data;
		temp->next= top;
		top = temp;
	}
	return top;
}

int pop(Stack *top) {
	
	if(isEmpty(top)) 
		cout << "Stack underflow" << endl;
	else {
		Stack *temp = top;
		head = top->next;		//change it as it is global
		int val = temp->data;
		free(temp);
		return val;
	}
}

int peek(int pos) {

	Stack *p = head;
	int i=1;
	while(i<pos && p!=NULL) {
		p = p->next;
		i++;
	}
	if(p==NULL)
		return -1;
	else 
		return p->data;	
}

void display(Stack *top) {

	while(top!=NULL) {

		cout << top->data <<endl;
		top = top->next;
	}
}	

int main() {
	
	head = push(head,1);
	head = push(head,2);
	head = push(head,3);

	display(head);	
	cout << "Popped element is: " << pop(head) << endl;
	display(head);	

	cout << "The element after peek operation is : " << peek(5) << endl;
	return 0;
}



