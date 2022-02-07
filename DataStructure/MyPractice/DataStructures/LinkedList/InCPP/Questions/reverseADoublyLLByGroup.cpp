
#include <iostream>

using namespace std;

class Node {

    public:
        int data;
        Node *next;
        Node *prev;

        Node() {}

        Node(int data) {
            this->data = data;
        }

        void traverse(Node *);
        Node* reverse(Node *,int);
};

void Node::traverse(Node* head) {

    Node *p = head;

    while(p!=NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << "\n";
}

Node* Node::reverse(Node *head,int size) {

    Node *p = NULL;
    Node *c = head;
    Node *n = NULL;
    int i=0;

    while(c != NULL && i<size) {

        n = c->next;
        c->next = p;
        c->prev = n;

        p=c;
        c=n;
        i++;
    }

    if(n != NULL) {

        Node *q = reverse(c,size);
        head->next = q;
        q->prev = head; 
    }

    return p;
}

int main() {

    Node obj;
    Node *head = new Node(10);
    Node *one = new Node(20);
    Node *two = new Node(30);
    Node *three = new Node(40);
    Node *four = new Node(50);

    head->prev = NULL;
    head->next = one;

    one->prev = head;
    one->next = two;

    two->prev = one;
    two->next = three;

    three->prev = two;
    three->next = four;

    four->prev = three;
    four->next = NULL;

    obj.traverse(head);
    head = obj.reverse(head,3);

    obj.traverse(head);

    return 0;

}