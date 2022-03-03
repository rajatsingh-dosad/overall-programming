
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* getNode() {
    int val;
    printf("Enter data: ");
    scanf("%d",&val);

    struct Node* node = malloc(sizeof(struct Node));
    node->data = val;
    node->prev = node;
    node->next = node;
}

void createNode() {

    struct Node* node = getNode();
    if(head==NULL)
        head = node;
    else {
        struct Node* temp = head;
        while(temp->next!=head) {
            temp = temp->next;
        }

        temp->next = node;
        node->prev = temp;
        head->prev = node;
        node->next = head;
    }
}

void traverse() {

    if(head==NULL) {
        printf("THe linkedList is empty!\n");
        return;
    }

    struct Node* temp = head;
    printf("THe linkedList is: ");
    do {
        if(temp->next ==head)
            printf("|%d|\n",temp->data);
        else
            printf("|%d| -> ",temp->data);
        temp = temp->next;
    }while(temp!=head);

}

void reverseTraverse() {
    if(head==NULL) {
        printf("THe linkedList is empty!\n");
        return;
    }
    struct Node* temp = head;
    printf("THe linkedList is: ");
    do {
        temp = temp->prev;
        if(temp ==head)
            printf("|%d|\n",temp->data);
        else
            printf("|%d| -> ",temp->data);
    }while(temp!=head);
}

int countNode() {
    int count = 1;
    struct Node* temp = head;
    while(temp->next!=head) {
        count++;
        temp = temp->next;
    }
    return count;
}

void addAtBeg() {
    
    struct Node* node = getNode();
    if(head==NULL) {
        head = node;
        return;
    }

    // struct Node* temp = head->prev;
    // node->next = head;
    // head->prev = node;
    // temp->next = node;
    // node->prev = temp;
    // head = node;

    // OR

    node->next = head;
    head->prev->next = node;
    node->prev = head->prev;
    head->prev = node;
    head = node;
}

void addAtEnd() {

    struct Node* node = getNode();
    if(head==NULL) {
        head = node;
        return;
    }

    // struct Node* temp = head->prev;
    // temp->next = node;
    // node->prev = temp;
    // node->next = head;
    // head->prev = node;

    //OR

    head->prev->next=  node;
    node->prev = head->prev;
    node->next = head;
    head->prev = node;
}


void addAtPos(int pos) {

    if(head==NULL) {
        printf("The linkedList is empty so adding element at first postion only\n");
        addAtBeg();
        return;
    }

    if(pos==1)
        addAtBeg();
    else if(pos==countNode()+1)
        addAtEnd();
    else if(pos>countNode()+1 || pos<=0)
        printf("You entered an invalid position!\n");
    else {

        struct Node* node = getNode();
        struct Node* temp = head;
        while(pos-2!=0) {

            temp = temp->next;
            pos--;
        }

        node->next = temp->next;
        temp->next->prev = node;
        node->prev = temp;
        temp->next = node;

    }
}

void deleteAtBeg() {

    if(head==NULL) {
        printf("The linkedLIst is already empty!\n");
        return;
    }

    if(countNode()==1) {
        free(head);
        head = NULL;
        return;
    }

    //Taking extra pointer
    // struct Node* temp2 = head;
    // struct Node* temp = head->prev;
    // head->next->prev = temp;
    // temp->next= head->next;
    // head = head->next;
    // free(temp2);

    //Or 

    //Without extra pointer
    struct Node* temp = head;
    head->next->prev = head->prev;
    head->prev->next = head->next;
    head = head->next;
    free(temp);
}



void deleteAtEnd() {

    if(head==NULL) {
        printf("THe linkedList is already empty!\n");
        return;
    }

    if(countNode()==1) {
        free(head);
        head = NULL;
        return;
    }

    //Using extra pointer
    // struct Node* temp1 = head->prev->prev;
    // head->prev = temp1;
    // free(temp1->next);
    // temp1->next =  head;
    
    //OR

    //Without using extra pointer
    head->prev = head->prev->prev;    
    free(head->prev->next);
    head->prev->next = head;

}

void deleteAtPos(int pos) {

    if(head==NULL) {
        printf("The linkedlist already empty\n");
        return;
    }

    if(pos==1)
        deleteAtBeg();
    else if(pos==countNode())
        deleteAtEnd();
    else if(pos>countNode() || pos<=0)
        printf("You entered an invalid position!\n");
    else {

            struct Node* temp = head;
            while(pos-2) {
                temp = temp->next;
                pos--;
            }

            struct Node* temp2 = temp->next;
            temp->next = temp2->next;
            temp2->next->prev = temp;
            free(temp2);
    }
}



void main() {

    int number;
    printf("Enter the number of elements you want to insert in the list: ");
    scanf("%d",&number);

    for(int i=0;i<number;i++) {
        createNode();
    }

    traverse();
    // reverseTraverse();

    // printf("Adding element at beginning:\n");
    // addAtBeg();
    // traverse();
    // reverseTraverse();


    // printf("Adding element at End:\n");
    // addAtEnd();
    // traverse();
    // reverseTraverse();

    int pos;
    // printf("Adding element at pos:\n");
    // printf("Enter pos: ");
    // scanf("%d",&pos);
    // addAtPos(pos);
    // traverse();
    // reverseTraverse();

    // printf("Deleting element From beginning:\n");
    // deleteAtBeg();
    // traverse();
    // reverseTraverse();

    // printf("Deleting element From End:\n");
    // deleteAtEnd();
    // traverse();
    // reverseTraverse();

    printf("Deleting element from pos:\n");
    printf("Enter pos: ");
    scanf("%d",&pos);
    deleteAtPos(pos);
    traverse();
    reverseTraverse();
}