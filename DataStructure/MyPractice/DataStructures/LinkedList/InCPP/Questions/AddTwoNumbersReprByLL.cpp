
#include <iostream>
#include <stack>
using namespace std;

class Node {

    public:
  
    int data;
    Node *next;

    Node() {

    }

    Node(int data)
    {
        this->data = data;
        
        
    }

    Node * create(Node *head);
    void traverse(Node *head);
    Node* insertAtEnd(Node *h3,int sum);
    Node *insertAtHead(Node *h3,int sum);
    // Node * printSum(Node *h1,Node *h2,Node *h3);   //Printing sum using Traversal
    Node * printSumUsingStack(Node *h1,Node *h2,Node *h3);

};



Node * Node::create(Node *head)
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
    return head;
}

void Node::traverse(Node *head)
{

    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }

    cout << "\n";
}


Node * Node::insertAtEnd(Node *h3,int data) {

    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;

    Node *p = h3;
    if(h3==NULL)
        h3 = temp;
    else    {
        while(p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }
    return h3;
}


Node * Node::insertAtHead(Node *h3,int data) {

    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if(h3==NULL)
        h3 = temp;
    else {
        temp->next = h3;
        h3=temp;
    }
        
       
    return h3;
}



//Approach 1 : USing Traversal

/*
Add two numbers represented by linked lists

Given two numbers represented by two lists, write a function that returns the sum list. 
The sum list is a list representation of the addition of two input numbers.

Input: 
List1: 1->2->3
List2: 2->3->4
Output: 
Resultant list: 3->5->7 

*/

// Node * Node::printSum(Node *h1,Node *h2,Node *h3) {

//     Node *p1= h1;
//     Node *p2 = h2;
    
//     int num1 =0,num2=0;
//     while(p1!=NULL) {

//         num1 = (num1*10)+p1->data;
//         p1 = p1->next;
//     }

//     while(p2!=NULL) {
//         num2  = (num2*10)+p2->data;
//         p2 = p2->next;
//     }

//     int sum = num1+num2;
//     while(sum!=0) {

//         int rem = sum %10;
//         sum = sum / 10;
//         h3 = insertAtHead(h3,rem);
//     }
//     return h3;
// }




//Approach 2: Using 3 Stacks


/*
Create 3 stacks namely s1,s2,s3.
Fill s1 with Nodes of list1 and fill s2 with nodes of list2.
Fill s3 by creating new nodes and setting the data of new nodes to the sum of s1.top(), s2.top() and carry until list1 and list2 are empty .
If the sum >9
set carry 1
else
set carry 0
Create a Node(say prev) that will contain the head of the sum List.
Link all the elements of s3 from top to bottom
return prev
*/

Node* Node::printSumUsingStack(Node *h1,Node *h2,Node *h3) {

    stack <int> s1,s2,s3;
    Node *p1 = h1;
    Node *p2 = h2;
    Node *p = h3;
    int a,b,sum = 0;
    int carry = 0;
    while(p1!=NULL) {

        s1.push(p1->data);
        p1 = p1->next;
    }

    while(p2!=NULL) {
        s2.push(p2->data);
        p2 = p2->next;
    }

    while(!s1.empty() || !s2.empty()){

        if(s1.empty())
            a = 0;
        else   
            a = s1.top();

        if(s2.empty())
            b = 0;
        else   
            b = s2.top();

        if(carry==1) {
            sum = a+b+1;
        }
        else 
            sum = a+b;

        if(sum>9) {
            sum = sum %10;
            carry = 1;
        }
        else 
            carry = 0;

        s3.push(sum);
        if(!s1.empty())
            s1.pop();
        if(!s2.empty())
            s2.pop();
        
    }
    if(carry==1)
        s3.push(1);
    while(!s3.empty()) {

        h3 = insertAtEnd(h3,s3.top());
        s3.pop();
    }
    return h3;
    
}



int main() {

    Node obj;
    Node *h1=NULL,*h2=NULL,*h3 = NULL;

    for(int i=0;i<3;i++)
        h1 = obj.create(h1);
    obj.traverse(h1);

    for(int i=0;i<3;i++)
        h2 = obj.create(h2);
    obj.traverse(h2);

    // h3 = obj.printSum(h1,h2,h3);
    h3 = obj.printSumUsingStack(h1,h2,h3);
    obj.traverse(h3);

    return 0;
}

