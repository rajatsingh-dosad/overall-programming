
/*

    Given a Linked List of size N, where every node represents a sub-linked-list and contains
 two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining 
the sorted order. 
Note: The flattened list will be printed using the bottom pointer instead of next pointer.

Input:
5 -> 10 -> 19 -> 28
|     |     |     | 
7     20    22   35
|           |     | 
8          50    40
|                 | 
30               45
Output:  5-> 7-> 8- > 10 -> 19-> 20->
22-> 28-> 30-> 35-> 40-> 45-> 50.
Explanation:
The resultant linked lists has every 
node in a single level.
(Note: | represents the bottom pointer.)

Input:
5 -> 10 -> 19 -> 28
|          |                
7          22   
|          |                 
8          50 
|                           
30              
Output: 5->7->8->10->19->20->22->30->50
Explanation:
The resultant linked lists has every
node in a single level.

(Note: | represents the bottom pointer.)
*/

#include <iostream>
using namespace std;

class Node {
	
    public:
        int data;
	    Node *next,*bottom;
	
};

class DLL {

    Node *head = NULL;
    public:
        void create();
        void traverse(Node *);
};

void DLL::create() {

    int nodes,b;
    cout << "Enter the total number of nodes: ";
    cin >> nodes;

    for(int i=0;i<nodes;i++) {

        int val;
        cout << "Enter the data in the "<< i+1 << " head: ";
        cin >> val;
        Node *temp = new Node();
        temp->data = val;
        temp->next = NULL;
        temp->bottom = NULL;

        cout << "Enter the number of elements in the " << i+1 << " head: ";
        cin >> b;

        for(int j=0;j<b;j++) {

            int bt;
            cout << "Enter the data in the bottom node: ";
            cin >> bt;
            Node *bot = new Node();
            bot->data = bt;
            bot->bottom = NULL;


        }
    }
}




