
#include <iostream>
using namespace std;

class Node {

	public:
		int data;
		Node *next;
};

//Creating nodes
Node* create(Node *head) {


        Node *temp = new Node();
        cout << "Enter the data: ";
        cin >> temp->data;
        temp->next = NULL;

        Node *ptr;
        ptr = head;
	
	if(head==NULL) {

		head = temp;
		head->next = head;
	}else {

		while(ptr->next != head) {

			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->next = head;
	}	

 
        return head;

}

void traverse(Node *head) {

	Node *p = head;

	do {
		cout << p->data <<endl;
		p  = p->next;

	}while(p!=head);
	


}

Node *insertAtFirst(Node *head ,int data) {

	Node *p = head;
	Node *temp  = new Node();
	temp->data = data;

	while(p->next!=head) {

		p = p->next;
	}
	// At this point p points to the last node of this circular linked list

	temp->next = head; 
	head = temp;
	p->next = head;
	
	return head ;

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
	

	cout << "List after inserting value is: "<<endl;
	head = insertAtFirst(head,30);\
	head = insertAtFirst(head,1000);

	traverse(head);
			
	return 0;
}
