
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
        Node* reverse(Node *);
};

void Node::traverse(Node* head) {

    Node *p = head;

    while(p!=NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << "\n";
}

Node* Node::reverse(Node *head) {

    Node *p = NULL;
    Node *c = head;
    Node *n = NULL;

    while(c!=NULL) {

        n = c->next;
        c->next = p;
        c->prev = n;

        p=c;
        c=n;
    }
    return p;
}

int main() {

    Node obj;
    Node *head = new Node(10);
    Node *one = new Node(20);
    Node *two = new Node(30);
    Node *three = new Node(40);

    head->prev = NULL;
    head->next = one;

    one->prev = head;
    one->next = two;

    two->prev = one;
    two->next = three;

    three->prev = two;
    three->next = NULL;

    obj.traverse(head);
    head = obj.reverse(head);

    obj.traverse(head);

    return 0;

}