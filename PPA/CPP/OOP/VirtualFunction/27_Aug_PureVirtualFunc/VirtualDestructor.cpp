
#include <iostream>
using namespace std;

class Parent {

    public:
        Parent() {
            cout << "Parent Constructor" << endl;
        }

        virtual ~Parent() {
            cout << "Parent Destructor" << endl;
        }
};

class Child: public Parent {

    int *iptr;
    public:
        Child() {
            iptr = new int[5];
            cout << "Child Constructor" << endl;
        }

        ~Child() {
            delete iptr;
            cout << "Child Destructor" << endl;
        }
};

int main() {

    cout << sizeof(Parent) << endl;
    cout << sizeof(Child) << endl;
    Parent *obj  = new Child ;
    delete obj;
    return 0;
}