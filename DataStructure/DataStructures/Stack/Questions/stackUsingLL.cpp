
#include <iostream>

using namespace std;

class Node {

    public:
        int data;
        Node *next;

        void push(int data);
        void pop();
        int isEmpty();
        int isFull();
        void print();
};

int main() {

    
    return 0;
}