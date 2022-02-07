
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
	//temp->next = NULL;
	
	Node *ptr = new Node();
	ptr = head;

	if(ptr==NULL)  {
		head = temp;
	}else if(ptr!=NULL) {

		while(ptr->next!=NULL) {

			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->next = NULL;

	}

	return head;



}

//Inserting at the beginning of the list
Node *insertAtBeg(Node *head,int data) {

	Node *temp = new Node();
	temp->data = data;
	temp->next = head;
	head = temp;

	return head;
}


//Inserting at the End of the list
Node *insertAtEnd(Node *head,int data) {

	Node *temp = new Node();
	temp->data = data;

	Node *p = new Node();
	p = head;

	while(p->next !=NULL) {

		p = p->next;
	}

	p->next = temp;
	temp->next = NULL;

	return head;

}


//Inserting at specific position
Node *insertAtpos(Node *head,int data,int pos) {
	
	Node *temp = new Node();
	temp->data= data;

	Node *p = new Node();
	p = head;
	
	
	while(pos-1>0) {

		p=p->next;
		pos--;
	}

	temp->next = p->next;
	p->next = temp;
	return head;
}


//Displaying the list
void traverse(Node *head) {

	while(head!=NULL) {

		cout << head->data << endl;
		head = head->next;
	}
}

int main() {

	Node *head = NULL;

	int n,begData,endData,midData,pos;
	cout << "Enter the number of node you want ot create: ";
	cin >>n;
	
	for(int i=0;i<n;i++) {
		head = create(head);
	}
	
	traverse(head);

	cout << "Enter the data you want at the beginning: ";
	cin >>begData;

	head = insertAtBeg(head,begData);
	traverse(head);


	cout << "Enter the data you want at the end: ";
	cin >>endData;

	head = insertAtEnd(head,endData);
	traverse(head);

	cout << "Enter the index you want to add a element(>=0): ";
	cin >> pos;

	cout << "Enter the data: ";
	cin >>midData;

	if(pos==0) {

		head = insertAtBeg(head,midData);
	}
	else 
		head = insertAtpos(head,midData,pos);
	traverse(head);

	return 0;
}
