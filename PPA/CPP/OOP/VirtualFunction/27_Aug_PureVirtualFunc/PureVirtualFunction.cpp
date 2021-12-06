
#include<iostream>
using namespace std;


class Parent {

    public:
        void educate() {
            cout << "We do Hard Work to provide good education" << endl;
        }
    
    virtual void career() = 0;
    virtual void marry() = 0;

};

class Child: public Parent {

    public:
        void career() {
            cout << "Youtuber" << endl;
        }

        void marry() {
            cout << "Soulmate" << endl;
        }
};

int main() {
    
    Parent *obj = new Child();
    obj->educate();
    obj->career();
    obj->marry();
    return 0;
}
