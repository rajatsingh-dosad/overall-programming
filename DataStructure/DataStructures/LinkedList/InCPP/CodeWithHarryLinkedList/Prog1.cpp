
#include <iostream>
using namespace std;

class Node {
	
	public :
		int data;
		Node *next;
};

int main() {
		

	Node *head = new Node();
	Node *two = new Node();
	Node *three = new Node();


	head->data = 1;
	head->next = two;
	
	two->data = 2;
	two->next = three;
	
	three->data = 3;
	three->next = NULL;
		
	while(head!=NULL) {
		
		cout << head->data << endl;
		head = head->next;
		
	}

	return 0;

}
