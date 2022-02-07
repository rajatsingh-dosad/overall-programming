#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};

Node *insert(Node *head){
	Node *temp = new Node();
    cout << "Enter the value: ";
    cin>>temp->data;
    temp->next = NULL;

    Node *p = new Node();
    p = head;
    if(head==NULL) {
        head = temp;
    }
    else if(p!=NULL) {
		while(p->next!=NULL) {
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}

void print(Node *head){
	while(head!=NULL) {
		cout << head->data << endl;
        head = head->next;

        }
}

int main() {
    int num;
    Node *head = NULL;
    cout << "Enter the number to be entered in the linked List: " <<endl;
    cin >> num;

    for(int i=0;i<num;i++) {
        head=insert(head);
        }
	
	print(head);
        

        return 0;
}
