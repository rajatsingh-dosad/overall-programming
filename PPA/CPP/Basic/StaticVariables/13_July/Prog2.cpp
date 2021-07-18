
// How to write Static variable inside the class

#include <iostream>

class StaticDemo {

    public:
        static int x;   //only definition (memory is not allocated yet)
};

int StaticDemo::x = 20; //actual definition(memory gets allocated)

int main() {

    StaticDemo obj1;
    StaticDemo obj2;

    std::cout << StaticDemo::x << std::endl;    //20
    std::cout << obj1.x << std::endl;           //20
    std::cout << obj2.x << std::endl;           //20

    obj1.x = 40;

    std::cout << obj1.x << std::endl;           //40
    std::cout << obj2.x << std::endl;           //40


    return 0;
}