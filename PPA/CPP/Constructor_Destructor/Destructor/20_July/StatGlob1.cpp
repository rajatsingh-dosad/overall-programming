
//What is the differnce between global variables and static variables

/*Ans)  Both global variable and static variable gets memory in data section
        Global variable scope are outside the file too whereas static variable scope are restricted to the file
        In the below e.g 'x' is a global variable and it can be accessed in other file(we have used StatGlob2.cpp file) but variable 'y' is a static variable so it can't be accessed from other file.
*/

#include <iostream>

void fun();

int x = 10;
static int y = 20;      

int main() {

    fun();
    return 0;
}