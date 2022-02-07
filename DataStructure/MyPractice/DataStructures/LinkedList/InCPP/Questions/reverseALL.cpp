
#include <iostream>
#include <stack>
using namespace std;

class Node
{

    int data;
    Node *next;
    public:

        Node() {
        }

        Node(int data)
        {
          this->data = data;
        }

        Node * create(Node *);
        void traverse(Node *);
        Node* reverse(Node *);
};

//there is  always a different thing that can be taken care off


Node* Node::create(Node *head) {

    int data;
    cout << "Enter the data: ";
    cin >> data;
    Node *temp = new Node(data);

    temp->next  = NULL;

    Node *p = head;
    if(head==NULL)
        head = temp;
    else {

        while(p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }

    return head;
}

void Node::traverse(Node *head) {

    Node *p = head;
    while(p!=NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << "\n";

}


Node* Node::reverse(Node *head) {

    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    while(curr!=NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{

    Node obj;
    Node *head = NULL;
    int data;
    cout << "Enter the number of data: ";
    cin >> data;
    for(int i=0;i<data;i++) {

        head = obj.create(head);
    }
    

    obj.traverse(head);
    head = obj.reverse(head);

    cout << "The linked list after reversing is: " << endl;
    
    obj.traverse(head);
    
    return 0;
}


int a = 10;