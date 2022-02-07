
#include <iostream>
using namespace std;

class Stack {
	
	public:
		int data;
		Stack *next;
};




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

int pop(Stack **top) {
	
	if(isEmpty(*top)) 
		cout << "Stack underflow" << endl;
	else {
		Stack *temp = *top;
		*top = (*top)->next;
		int val = temp->data;
		free(temp);
		return val;
	}
}

void display(Stack *top) {

	while(top!=NULL) {

		cout << top->data <<endl;
		top = top->next;
	}
}	

int main() {
	
	Stack *top = NULL;
	top = push(top,1);
	top = push(top,2);
	top = push(top,3);

	display(top);	
	cout << "Popped element is: " << pop(&top) << endl;
	display(top);	


	return 0;
}
