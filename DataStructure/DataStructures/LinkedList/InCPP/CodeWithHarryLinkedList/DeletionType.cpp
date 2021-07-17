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

//Deleting the node at end
Node* deleteAtEnd(Node *head) {
	
	Node *ptr1= new Node();
	ptr1 = head;

	Node *ptr2 = new Node();
	ptr2 = head->next;

	while(ptr2->next!=NULL) {

		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}

	ptr1->next = NULL;
	free(ptr2);
	


	return head;
}


//Deleting the node at beginning
Node *deleteAtBeg(Node *head) {
	
	Node *ptr = head;
	head = head->next;
	free(ptr);

	return head;
}


//Deleting the node at given index
Node *deleteIndex(Node *head,int index) {
	
	Node *p = new Node();
	p = head;

	while(index-1 >0) {

		p = p->next;
		index--;
	}

	Node *temp = p->next;
	p->next = temp->next;
	free(temp);

	return head;

}



//Deleting the node with given value
Node *deleteAtGivenVal(Node *head,int element) {

	Node *p1 = new Node();
	p1 = head;
	
	Node *p2 = new Node();
	p2=head->next;

	while(p2->data != element && p2->next!=NULL) {
		
		p2 = p2->next;
		p1 = p1->next;
	}
	
	if(p2->data == element) {
		p1->next = p2->next;
		free(p2);
	}

	else 
		cout << "Element "<< element << "  not present\n";

	return head;	
		
}

void traverse(Node *head) {

        while(head!=NULL) {

                cout << head->data << endl;
                head = head->next;
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

	cout <<"List after deleting first element is: \n";
	head = deleteAtBeg(head);
	traverse(head);
	
	cout << "List after deleting last element is: \n";
	head = deleteAtEnd(head);
	traverse(head);

	cout << "Enter the index you want to delete: ";
	cin>>index;

	head = deleteIndex(head,index);
	traverse(head);


	cout << "Enter the element you want to delete: ";
	cin >> element;

	head  = deleteAtGivenVal(head,element);
	traverse(head);

	return 0;
}
