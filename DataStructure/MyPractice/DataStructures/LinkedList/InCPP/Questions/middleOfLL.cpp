
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
        int findMiddle();
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

int Node::findMiddle() {

   
    //Approach 1

    //First counting the number of nodes in the list and then iterating till the count/2 nodes 

    // Node *p = head;
    // int count = 1;
    // int i=1;
    // while(p !=NULL) {
    //     count++;
    //     p = p->next;
    // }

    // p = head;
    // while(i<count/2) {

    //     p=p->next;
    //     i++;
    // }
    // return p->data;




     //Approach 2

    //Using a slow and fast pointer: we will iterate slow pointer by one and fast pointer by two 
    //so when fast pointer reaches NULL our slow pointer will reach middle of list.

    if(head!=NULL) {
        Node *slow = head;
        Node *fast = head->next;
        while(fast!=NULL && fast->next!=NULL) {      
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
    return -1;

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
    int element = obj.findMiddle();
    if(element>0)
        cout << "THe middle element is: " << element << endl;
    else
        cout << "The linked list is empty"<< endl;

    return 0;
}