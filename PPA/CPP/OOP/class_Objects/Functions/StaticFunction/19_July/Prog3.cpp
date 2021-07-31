
//We can't access instance variable directly inside static functions but we can initialize instance variable inside it


#include <iostream>

class AccessDemo {

    int x = 10;
    static int y;

    public:
        static void fun1() {

            int x = 30;
            std::cout << x << std:: endl;
            std::cout << y << std:: endl;
        } 

};

int AccessDemo:: y = 20;

int main() {

    AccessDemo obj;
    obj.fun1();

    return 0;
}