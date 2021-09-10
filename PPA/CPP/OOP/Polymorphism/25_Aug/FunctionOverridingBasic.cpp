

// virtual tells to compiler that don't bind the function now, wait till runtime if my child has the same function then bind to it, otherwise if it doesn't have then bind to me itself.

#include <iostream>

class Parent {

    public:
        Parent() {
            std::cout << "Parent constructor" << std::endl;
        }

        void career() {

            std::cout << "Computer Engineer" << std::endl;
        }      

        virtual void marry() {
            std::cout << "Deepika Padukone" << std::endl;
        }
};

class Child: public Parent {

    public:
        Child() {
            std::cout << "Child constructor" << std::endl;
        }

        void music() {

            std::cout << "Music" << std::endl;
        }

        void marry() {
            std::cout << "Disha Patani" << std::endl;
        }
};

int main() {

    
    Child *obj1 = new Child();
    obj1->career();
    obj1->music();
    obj1->marry();

    Parent *obj2 = new Parent();
    obj2->career();
    obj2->marry();

    Parent *obj3 = new Child();
    obj3->career();
    obj3->marry();

    return 0;
}

