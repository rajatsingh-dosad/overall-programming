
#include <iostream>
using namespace std;

class Node {
	
	public:
	int data;
	Node *next;
};

void traverse(Node *head) {

        while(head!=NULL) {

                cout << head->data << endl;
                head = head->next;
        }
}

//Creating nodes
Node* create(Node *head) {


        Node *temp = new Node();
        cout << "Enter the data: ";
        cin >> temp->data;
        temp->next = NULL;

        Node *ptr = new Node();
        ptr = head;

        if(ptr==NULL)  {
                head = temp;
        }else if(ptr!=NULL) {

                while(ptr->next!=NULL) {

                        ptr = ptr->next;
                }
                ptr->next = temp;

        }

        return head;
}


//Using backtracking and in total total if 4 node are present then call will be given 4 times and when the function gets terminated and if has something to return it will return else will directly come to previous function where it was called.
void reversePrint(Node *head) {
		
	if(head==NULL) {
		;
	}

	else {
	
		reversePrint(head->next);
		cout << head->data << endl;
	}
}


int main() {

        Node *head = NULL;

        int n,index,element;
        cout << "Enter the number of node you want ot create: ";
        cin >>n;

        for(int i=0;i<n;i++) {
                head = create(head);
        }

        traverse(head);
	reversePrint(head);
	return 0;
}
