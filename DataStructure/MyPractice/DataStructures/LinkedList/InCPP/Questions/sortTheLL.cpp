
#include <iostream>

using namespace std;

class Node
{

    int data;
    Node *next;
    Node *head = NULL;
    public:

        Node() {
        }

        Node(int data)
        {
          this->data = data;
        }

        void create();
        void traverse();
        void sort();
        
};



void Node::create() {

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


}

void Node::traverse() {

    Node *p = head;
    while(p!=NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << "\n";

}


void Node::sort() {

    Node *p = head;

    while(p->next!=NULL) {

        Node *cp = p->next;

        while(cp!=NULL) {
            
            if(p->data > cp->data) {
                int temp = p->data;
                p->data = cp->data;
                cp->data = temp;
            }

            cp = cp->next;
        }
        p = p->next;
    }
}

int main()
{

    Node obj;

    int data;
    cout << "Enter the number of data: ";
    cin >> data;
    for(int i=0;i<data;i++) {

        obj.create();
    }
    
    obj.traverse();

    cout << "The linked list after sorting is : " << endl;
    obj.sort();
    obj.traverse();

    return 0;
}