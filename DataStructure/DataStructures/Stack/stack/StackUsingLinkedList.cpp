
#include <iostream>
using namespace std;



class Node
{

public:
    int data;
    Node *next;
};


Node *top = NULL;

void push(int data)
{

    Node *tmp = new Node();
    tmp->data = data;
    if (top == NULL)
    {
        top = tmp;
    }
    else if (top != NULL)
    {
        tmp->next = top;
        top = tmp;
    }
}

void pop() {

    Node *p = top;
    top = top->next;
    free(p);
}

void print()
{

    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

int main()
{

    push(10);
    push(20);
    push(30);
    push(40);

    print();

    pop();

    cout << "Element after poping is :" << endl;
    print();

    return 0;
}