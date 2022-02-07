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
    int detectLoop();
    void removeLoop();
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


int Node::detectLoop() {

    
    Node *slow = head;
    Node *fast = head;

    while(fast!=NULL && fast->next!=NULL) {

        slow = slow->next;
        fast = fast->next->next;
        
        if(slow==fast) 
            return 1;
    }


    return 0;
}

void Node::removeLoop() {
    
    Node *slow = head;
    Node *fast = head;

    while(fast!=NULL && fast->next!=NULL) {


        slow = slow->next;
        fast = fast->next->next;
        
        if(slow==fast) { 
            break;
            
        }
        
    }

    slow = head;
    while(slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    
    fast->next = NULL;
  

}


int main()
{

    Node obj;

    Node *one = new Node(10);
    Node *two = new Node(20);
    Node *three = new Node(30);
    Node *four = new Node(40);
    Node *five = new Node(50);
    Node *six = new Node(60);

    head = one;

    head->next = two;

    two->next = three;

    three->next = four;

    four->next = five;

    five->next = six;

    six->next =three;


    int loop = obj.detectLoop();

    if(loop==1) {
        cout << "The list contains a loop!!!"<< endl;
        cout << "To remove the loop calling function removeLoop" << endl;
        obj.removeLoop();
        cout << "The list after removing the loop is: " << endl;
        obj.traverse();
    }
    else
        cout << "The list doesn't contain a loop"<< endl;



    return 0;
}