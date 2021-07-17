
#include <iostream>
using namespace std;

class Node {
	
	public:
	int data;
	Node *next;
};

void linkedListTraversal(Node *head) {
	
	while(head!=NULL) {
		
		cout << head->data<<endl;
		head = head->next;

	}		
}

int main() {

	Node *head = new Node();
	Node *second = new Node();
	Node *third = new Node();
	
	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = NULL;

	linkedListTraversal(head);

		
	return 0;
}
