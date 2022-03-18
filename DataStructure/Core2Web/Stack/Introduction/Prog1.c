
// Stack using Array

#include <stdio.h>
#include <stdlib.h>
#define size 5

int arrStack[size];
int top = -1;

int isEmpty() {
    if(top==-1)
        return 1;
    return 0;
}

int isFull() {
    if(top==size-1)
        return 1;
    return 0;
}

void push(int data) {
    if(isFull()) {
        printf("Stack overflow\n");
        return;
    }
    arrStack[++top] = data;
}

int pop() {
    if(isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    
    return arrStack[top--];
}

void printStack() {
    printf("The stack is: ");
    for(int i=top;i>=0;i--) {
        printf("%d ",arrStack[i]);
    }
    printf("\n");
}

void main() {
    
    char ch = 'y';

    do {

        printf("1) push\n2) pop\n3) printStack\n");
        
        int choice;
        printf("Enter you choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: {
            int data;
            printf("Enter data: ");
            scanf("%d",&data);
            push(data);
            }
            break;
        
        case 2:

            {
            int rm;
            rm = pop();
            int temp = top+1;
            
            //For the test case when the data will be -1 itself and when stack is empty
            if(rm == arrStack[0] || top >=0)
                printf("The poped element is: %d\n",rm);
            }
            break;


        case 3:
            printStack();
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("Wrong choice!\n");
            break;
        }

        getchar();
        printf("Do you want to continue: ");
        scanf("%c",&ch);
    }while(ch=='y' || ch=='Y');
}
