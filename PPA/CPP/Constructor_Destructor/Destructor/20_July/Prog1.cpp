
// Basic code of Destructor i.e when it gets called

#include <iostream>

class Demo {

    int x = 10;

    public:
        Demo() {

            std::cout << "In constructor" << std::endl;
        }

        ~Demo() {

            std::cout << "In destructor" << std::endl;
        }
};

int main() {

    Demo obj1;
    
    Demo *obj2 = new Demo();
    
    delete obj2;    //when we create a object with 'new' then it gets memory in the heap section so it's scope is not restricted within the function the object is created, so when the function is completed call is not given to the destructor.
                    //But when we delete the object explicitly then call is given to the destructor

    return 0;
}