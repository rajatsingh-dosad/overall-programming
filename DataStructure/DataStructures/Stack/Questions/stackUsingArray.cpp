
#include <iostream>

using namespace std;

class Stack {

    public:
        int size;
        int top;
        int arr[30];

        Stack() {

            size = 30;
            top = -1;
        }

        int  isFull();
        int isEmpty();
        void push(int data);
        void pop();
        void print();

};

int Stack::isFull() {

    if(top==size-1)
        return 1;
    return 0;
}

int Stack::isEmpty() {

    if(top==-1)
        return 1;
    return 0;
}

void Stack::push(int data) {

    if(isFull()) {
        cout << "Stack overflow" << endl;
    }
    else {
        arr[++top] = data;
    }
}


void Stack::pop() {

    if(isEmpty()) {
        
        cout << "Stack underflow" << endl;
    }
    else {
        top--;
    }
}

void Stack::print() {

    for(int i=top;i>=0;i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.print();

    s.pop();
    
    s.print();
}