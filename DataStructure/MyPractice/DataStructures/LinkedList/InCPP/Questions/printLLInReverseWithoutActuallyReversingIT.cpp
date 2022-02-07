
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
        void printInReverseRecursion(Node *);
        void printInReverseStack(Node *);
};



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

    //Approach 1: Using recursion 

// void Node::printInReverseRecursion(Node *head) {

//     if(head->next!=NULL) 
//         printInReverseRecursion(head->next);
//     cout << head->data << " ";
    
// }



    //Approach 2: Using stack

void Node::printInReverseStack(Node *head) {

    stack<int> s1;

    while(head!=NULL) {

        s1.push(head->data);
        head = head->next;
    }

    while(!s1.empty()) {

        cout << s1.top() << " ";
        s1.pop();
    }
    cout << "\n";
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
    // obj.printInReverseRecursion(head);
    // cout << "\n";
    
    obj.printInReverseStack(head);

    return 0;
}