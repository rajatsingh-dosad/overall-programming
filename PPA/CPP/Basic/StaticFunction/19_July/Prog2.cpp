
//Checking difference between non-static and static function
//Inside non-static function non-static as well static variable can be accessed
//Inside static function only static variable can be accessed

#include <iostream>

class AccessDemo {

    int x = 10;
    static int y;

    public:
        void fun1() {

            std::cout << x << std:: endl;
            std::cout << y << std:: endl;
        } 

        static void fun2() {
            
            //std::cout << x << std:: endl;   //error 
            std::cout << y << std:: endl;
        }
};

int AccessDemo:: y = 20;

int main() {

    AccessDemo obj;
    obj.fun1();

    obj.fun2();
    return 0;
}