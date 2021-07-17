
#include <iostream>

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

        void create();
        void traverse();
        // int occurenceOfInt(int var);     //for approach 1
        int occurenceOfInt(Node *p,int var);
};

Node *head = NULL;

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

// int Node::occurenceOfInt(int var) {


//     //Approach 1

//     //Iterating through the whole LL and checking if data is same as var and increamenting count if same

//     // int occ = 0;
//     // Node *p = head;
//     // while(p!=NULL) {
//     //     if(p->data == var)
//     //         occ++;
//     //     p = p->next;
//     // }
//     // return occ;
// }


    //Approach 2

    //Using reucrsion

int cnt  = 0;
int Node::occurenceOfInt(Node *p,int val) {

    
    if(p==NULL) 
        return cnt;
    else if(p->data == val) {
        cnt++;
        return occurenceOfInt(p->next,val);
    }
    else
        return occurenceOfInt(p->next,val);
        
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



    int var;
    cout << "Enter the integer to find it's occurence: ";
    cin >> var;
    Node *p = head;
    // int occ = obj.occurenceOfInt(var);       //for approach 1
    int occ = obj.occurenceOfInt(p,var);
    cout << "The occurence of the integer: "<<var<< " is: "<<occ << endl;

    return 0;
}