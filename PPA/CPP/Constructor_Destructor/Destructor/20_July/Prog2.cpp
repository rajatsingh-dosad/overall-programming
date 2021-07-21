
//The use of destructor in clean-up codes

#include <iostream>

class Demo {

    int *ptr;

    public:
        Demo() {

            std::cout << "In constructor" << std::endl;
            ptr = new int;
            *ptr = 20;
        }

        void fun() {

            Demo obj;   //Because of this line call will be given to the constructor and it will print first line in the constructor and will allocate memory for ptr
            std::cout << "In fun()" << std::endl;       //After returning from constructor it will print this line and will call the destructor as object 'obj' is out of scope
                                                        /*Let's suppose we have not written 'delete(ptr)' in the destructor so what it will do is the memory that was allocated to ptr 
                                                          will not get deleted and will be the case of MEMORY LEAK i.e neither it is deleted nor it is accessible
                                                        */
        }

        ~Demo() {

            std::cout << "In destructor" << std::endl;
            delete(ptr);
        }
};

int main() {

    Demo obj1;
    obj1.fun();
    return 0;
}