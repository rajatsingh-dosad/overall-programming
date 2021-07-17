
#include <iostream>
using namespace std;

class Node
{

    public:
      int data;
      Node *next;
};

//Creating nodes
Node *create(Node *head)
{

    Node *temp = new Node();
    cout << "Enter the data: ";
    cin >> temp->data;
    temp->next = NULL;

    Node *ptr;
    ptr = head;

    if (head == NULL)
    {

        head = temp;
        head->next = head;
    }
    else
    {

        while (ptr->next != head)
        {

            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = head;
    }

    return head;
}

void traverse(Node *head)
{

    Node *p = head;

    do
    {
        cout << p->data << " ";
        p = p->next;

    } while (p != head);

    cout << "\n";
}

void split(Node *head,Node **head1,Node **head2) {

    int mid = 0;

    Node *fast = head->next;

    while(fast!=head && fast->next!=head) {

        mid++;;
        fast = fast->next->next;
    }


    *head1 = head;
    Node *q = *head1;

    while(mid>0) {


        q = q->next;
        mid--;
    }
    
    *head2 = q->next;
    q->next = *head1;

    Node *r = *head2;
    while(r->next!=head) {

        r = r->next;
    }
    r->next = *head2;
} 

int main()
{

    Node *head = NULL;
    Node *head1 = NULL;
    Node *head2 = NULL;

    int n, index, element;
    cout << "Enter the number of node you want ot create: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        head = create(head);
    }

    cout << "The normal LL is: ";
    traverse(head);

    split(head,&head1,&head2);

    cout << "The first half of the LL is: ";
    traverse(head1);

    cout << "The second half of the LL is: ";
    traverse(head2);
    


    return 0;
}
