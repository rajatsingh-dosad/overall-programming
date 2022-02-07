
#include <iostream>
using namespace std;

class Node {
	
	public:
	int data;
	Node *next;
};

int linkedListTraversal(Node *head,int num) {
	
	while(head!=NULL) {
			
		if(head->data == num)
			return 1;
		head = head->next;

	}
	return -1;	
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

	int num = linkedListTraversal(head,20);
	if(num==-1) 
		cout << "Number not present\n";
	else 
		cout << "Present\n";

		
	return 0;
}
