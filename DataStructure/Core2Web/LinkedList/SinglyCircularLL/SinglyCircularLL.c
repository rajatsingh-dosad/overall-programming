
#include <stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;   //the node which is pointing to head again so that there is no need to traverse to add or delete

struct Node* getNode() {

    int val;
    printf("Enter data: ");
    scanf("%d",&val);

    struct Node* node = malloc(sizeof(struct Node));
    node->data = val;
    node->next = node;

    return node;
}

void createNode() {

    struct Node* node = getNode();
    //struct Node* temp = NULL;
    if(head==NULL) {
        head = node;
    }
    // else {
    //     temp = head;
    //     while(temp->next != head) {
    //         temp = temp->next;
    //     }
    //     temp->next = node;
    // }
    //OR
    else {
        tail->next= node;
        node->next = head;
    }

    tail = node;
}

void traverse() {

    if(head==NULL) {
        printf("The linkedLIst is empty!!!\n");
        return;
    }
    struct Node* temp = head;

    printf("The linkedList is: ");
    do {
        if(temp->next==head)
            printf("|%d|\n",temp->data);
        else
            printf("|%d| -> ",temp->data);

        temp = temp->next;
    }while(temp!=head);
}

int countNode() {

    int count = 0;
    struct Node* temp = head;

    do {
        count++;
        temp =temp->next;
    }while(temp!=head);
    return count;
}

void addAtBeg() {

    struct Node* node = getNode();
    if(head==NULL) {
        head = node;
        tail = node;
        return;
    }

    node->next = head;
    tail->next= node;
    head  = node;
}

void addAtEnd() {

    struct Node* node = getNode();
    if(head==NULL) {
        head = node;
        tail = node;
        return;
    }
    tail->next = node;
    tail = node;
    tail->next = head;
}   

void addAtPos(int pos) {

    if(pos==1)
        addAtBeg();
    else if(pos==countNode()+1)
        addAtEnd();
    else if(pos>countNode()+1 && pos<=0)
        printf("You entered an invalid position:\n");
    else {

        struct Node* node = getNode();
        struct Node* temp = head;
        while(pos-2) {
            temp = temp->next;
            pos--;
        }
        node->next = temp->next;
        temp->next = node;
        
    }
}

void deleteAtBeg() {

    if(head==NULL) {
        printf("The linkedList is already empty!!!\n");
        return;
    }

    if(countNode()==1) {
        free(head);
        head = NULL;
        tail = NULL;
        return; 
    }

    head = head->next;
    free(tail->next);
    tail->next = head;
}


void deleteAtEnd() {
    if(head==NULL) {
        printf("The linkedList is already empty:\n");
        return;
    }

    if(countNode()==1) {
        free(head);
        head = NULL;
        tail = NULL;
        return;
    }

    struct Node* temp = head;
    while(temp->next->next!=head) {

        temp = temp->next;
    }

    free(tail);
    temp->next = head;
    tail = temp;
}

void deleteAtPos(int pos) {

    if(head==NULL) {
        printf("The linkedList is already empty!!!\n");
        return;
    }
    if(pos==1)
        deleteAtBeg();
    else if(pos==countNode())
        deleteAtEnd();
    else if(pos>countNode() || pos<=0)
        printf("You entered a invalid position\n");
    else {

        struct Node* temp = head;
        while(pos-2) {

            temp = temp->next;
            pos--;
        }

        struct Node* temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }
}

//Inplace reverse
void reverse() {
    
    if(head==NULL || tail ==NULL) {
        printf("LinkedList is empty!!!\n");
        return;
    }

    struct Node* prev = tail;
    struct Node* curr = head;
    struct Node* next = NULL;

    // do {   
    //     next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    // }while(curr!=head);


    while(next!=head) {    
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    tail = head;
    head  = prev;

}
    
void main() {

    int number;
    printf("Enter the number of elements you want to insert in the LL: ");
    scanf("%d",&number);

    for(int i=0;i<number;i++) {
        createNode();
    }

    traverse();

    printf("Adding at Beg:\n");
    addAtBeg();
    traverse();

    printf("Adding at End:\n");
    addAtEnd();
    traverse();

    int pos;
    printf("Adding at pos:\n");
    printf("Enter position: ");
    scanf("%d",&pos);
    addAtPos(pos);
    traverse();

    printf("Deleting from Beg:\n");
    deleteAtBeg();
    traverse();

    printf("Deleting from End:\n");
    deleteAtEnd();
    traverse();

    printf("Deleting at pos:\n");
    printf("Enter position: ");
    scanf("%d",&pos);
    deleteAtPos(pos);
    traverse();

    reverse();
    traverse();
}