
#include <iostream>
using namespace std;

class Stack {

    public:
        int size;
        int top;
        int arr[30];
};

void push(Stack *s,int data) {

    s->top += 1;
    s->arr[s->top] = data;
} 

void print(Stack *s) {

    for(int i=s->top;i>=0;i--) {

        cout << s->arr[i] << " ";
    }
    cout << "\n"; 
}

int main() {

    Stack *s = new Stack();
    s->top = -1;
    s->size = 30;

    push(s,10);
    push(s,20);
    push(s,30);

    print(s);
    return 0;
}