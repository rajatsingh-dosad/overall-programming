
//static variable inside member function

#include <iostream>

class StaticDemo {

    public:
        static int x;

        void fun() {

            static int y = 20;
            std::cout << x << std::endl;
            std::cout << y << std::endl;
        }

};

int StaticDemo::x = 10;

int main() {

    StaticDemo obj;
    obj.fun();

    std::cout << obj.x << std::endl;
    return 0;
}