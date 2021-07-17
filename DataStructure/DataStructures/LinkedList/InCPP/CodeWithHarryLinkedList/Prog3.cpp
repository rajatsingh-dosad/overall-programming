#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};

//insetring at last
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

//inserting at location
Node *insert_at_position(Node *head){
	int location;
	Node *temp = new Node();
	
	cout<<"ehter the location";
    cin>>location;
    
    cout << "Enter the value: ";
    cin>>temp->data;
    temp->next = NULL;
    
    Node *p = new Node();
    
    if(location == 0){
    	temp->next=head;
    	head=temp;
		return head;	
	}
	p = head;
	while(location-1 >0){
		p=p->next;
		location--;
	}
	temp->next=p->next;
	p->next=temp;
	
    
    return head;
}



//printing the data
void print(Node *head){
	cout<<"the values of LL are"<<"\n";
	while(head!=NULL) {
		cout << head->data << endl;
        head = head->next;

        }
}

int main() {
    int num;
    Node *head = NULL;
    cout << "Enter the number to be entered in the linked List: " <<"\n";
    cin >> num;

    for(int i=0;i<num;i++) {
        head=insert(head);
        }
	
	print(head);
	
	head = insert_at_position(head);
	
	print(head);
        

        return 0;
}
