
// If linkedlist contains a value given by user then delete that node

#include <stdio.h>
#include <stdlib.h>

struct Node {

	int data;
	struct Node* next;
};

struct Node* head = NULL;

void traverse() {

	if(head==NULL){

		printf("LinkedList is empty!\n");
		return;
	}

	struct Node* temp = head;
	while(temp!=NULL) {

		if(temp->next==NULL)
			printf("|%d|\n",temp->data);
		else
			printf("|%d| -> ",temp->data);

		temp = temp -> next;
	}
}

struct Node* getNode() {

	int val;
	printf("Enter data: ");
	scanf("%d",&val);

	struct Node* node = malloc(sizeof(struct Node));
	node->data = val;
	node->next = NULL;

	return node;
}

void createNode() {

	struct Node* node = getNode();
	struct Node* temp = NULL;
	if(head==NULL)
		head = node;
	else {

		temp = head;
		while(temp->next!=NULL)
			temp = temp -> next;

		temp->next = node;
	}
}

	
int countNode() {

        int count = 0;
        struct Node* temp = head;

        while(temp!=NULL) {

                count++;
                temp = temp->next;
        }

        return count;
}

void deleteAtBeg() {

        if(head==NULL)
                printf("LinkedList is already empty!\n");
        else {

                struct Node* temp = head;
                head = head->next;
                free(temp);
        }
}

void deleteAtEnd() {

        if(head==NULL)
                printf("LinkedList is already empty!\n");
        else if(countNode()==1) {
                free(head);
                head = NULL;
        }
        else {

                struct Node* temp = head;
                while(temp->next->next!=NULL)
                        temp = temp->next;

                free(temp->next);
                temp->next = NULL;
        }
}

void deleteAtPos(int pos) {

        if(head==NULL) {
                printf("Empty List!\n");
                return;
        }

        if(pos==1)
                deleteAtBeg();
        else if(pos==countNode())
                deleteAtEnd();
        else if(pos>countNode() || pos<=0)
                printf("Invalid position!\n");
        else {

                struct Node* temp = head;
                while(pos-2) {

                        temp  = temp->next;
                        pos--;
                }

                struct Node* temp2 = temp->next;
                temp->next = temp2->next;
                free(temp2);
        }
}


void delete(int val) {

	if(head==NULL) {
		printf("List is empty!\n");
		return;
	}
	
	int pos = 1;

	struct Node* temp  = head;
	int flag = 0;
	while(temp!=NULL) {
		
		if(temp->data==val) { 
			temp = temp->next;
			deleteAtPos(pos);
			flag = 1;
		}
		else {
			pos++;
			temp = temp -> next;
		}
	}

	if(flag==0)
		printf("The element is not in the list to delete\n");
	else
		printf("The element is successfully deleted from the list\n");
}

void main() {

	int number;
	printf("Enter the number of data you want to insert: ");
	scanf("%d",&number);

	for(int i=0;i<number;i++)
		createNode();
	traverse();

	int data;
	printf("Enter a data to delete from the list: ");
	scanf("%d",&data);
	delete(data);
	traverse();
}
