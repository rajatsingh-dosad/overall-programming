
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

    Node *p = head;
    while(p!=NULL) {

        Node *t = p;
        Node *q = p->next;
        while(q!=NULL) {

            if(p->data==q->data) {

                Node *ptr = q;
                q = q->next;
                t->next = q;
                free(ptr);
            }
            else {

                q = q->next;
                t = t->next;
            }
        }
        p=p->next;
    }

    // Node *p = head;
    // Node *q = head;
    // while(p!=NULL && p->next!=NULL) {

    //     q = p;
    //     while(q!=NULL && q->next!=NULL) {

    //         if(p->data == q->next->data) {
    //             Node *temp = q->next;
    //             q->next = q->next->next;
    //             free(temp);
                
    //         }
    //         else {
    //             q=q->next;
    //         }
    //     }
    //     p=p->next;
    // }
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