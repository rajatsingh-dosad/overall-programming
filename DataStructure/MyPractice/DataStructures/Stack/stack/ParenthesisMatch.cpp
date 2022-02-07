
#include <iostream>
using namespace std;

	
class Stack {
	
	public:
	int size;
	int top;
	char arr[30];
};

int isEmpty(Stack *ptr) {

	if(ptr->top==-1) {
		return 1;
	}
	return 0;
}


void push(Stack *s,char data) {
		
		s->top += 1;
		s->arr[s->top] = data;

}

char pop(Stack *s) {
	
	if(isEmpty(s)) {
		cout << "Stack Underflow" << endl;
		return -1;
	}else {
		char x = s->arr[s->top--];
		return x;
	}
}


int isStable(Stack *s, string r) {

	for(int i=0;i<r.length();i++) {
		
		if(r[i] == '(')
			push(s,r[i]);
		else if(r[i] == ')') {
			if(isEmpty(s)) 
				return 0;
			
			pop(s);


		}
	}
	if(isEmpty(s))
		return 1;
	else 
		return 0;
}

int main()  {
	
	Stack *s = new Stack();
	s->size = 30;
	s->top = -1;
	s->arr;
	cout << "Stack has been created successfully" << endl;
	
	string r = "((10+20+(3*3)))";
	if(isStable(s,r))
		cout << "THe parenthesis is matching" << endl;
	else
		cout << "The parenthesis is not matching" << endl;
			
	
	return 0;
}
