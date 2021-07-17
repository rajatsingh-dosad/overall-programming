
#include <iostream>

using namespace std;

class Node
{
    
public:
  
    int data;
    Node *next;
    Node() {

    }

    Node(int data)
    {
        this->data = data;
        
        
    }

    void create();
    void traverse();
    void deleteDuplicates();

};

Node *head = NULL;

void Node::create()
{

    int data;
    cout << "Enter the data: ";
    cin >> data;
    Node *temp = new Node(data);

    temp->next = NULL;

    Node *p = head;
    if (head == NULL)
        head = temp;
    else
    {

        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void Node::traverse()
{

    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }

    cout << "\n";
}

void Node::deleteDuplicates() {

    Node *p= head;
    Node *temp = NULL;

    while(p!=NULL && p->next!=NULL) {

        if(p->data==p->next->data) {
            
            temp = p->next;
            p->next = p->next->next;
            free(temp);
        }
        else 
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

    cout << "The linked after deleting the duplicates data is: ";
    obj.deleteDuplicates();
    obj.traverse();
    
    return 0;
}