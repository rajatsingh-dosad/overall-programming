
#include <iostream>
using namespace std;


class Parent {

    public:
        Parent() {
            cout << "Parent constructor" << endl;
        }

        virtual ~Parent() = 0;
};

Parent:: ~Parent() {
    cout << "Parent Destructor" << endl;
}

class Child: public Parent {

    public:
        Child() {
            cout << "Child constructor" << endl;
        }

        ~Child() {
            cout << "Child destructor" << endl;
        }
};

int main() {

    Parent *obj = new Child();
    delete obj;
    return 0;
}