
#include <iostream>

extern int x;
extern int y;

void fun() {

    std::cout << "In fun" << std::endl;
    std::cout << x << std::endl;
    // std::cout << y << std::endl;     //error as y is static in StatGlob1.cpp
}