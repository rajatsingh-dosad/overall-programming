
//Difference between instance object and static object
//Check output for better understanding specially call to destructor

#include <iostream>

class Demo {

    public:
        Demo() {

            std::cout << "In constructor" << std::endl;
        }
        
        void fun() {

            std::cout << "In fun" << std::endl;
        }

        ~Demo() {

            std::cout << "In destructor" << std::endl;
        }
};


/*

int main() {
    
    std::cout << "Start of main" << std::endl;
    Demo obj1;

    {
        Demo obj2;       //Non static object so as soon as it is out of scope, object is deleted and call is given to the destructor
    }

    obj1.fun();
    //obj2.fun();       //Error: as obj2 scope is finished and it has also got deleted earlier

    std::cout << "End of main" << std::endl;
    return 0;
}

*/

/* Output:

    Start of main
    In constructor
    In constructor
    In destructor
    In fun
    End of main
    In destructor
*/



int main() {
    
    std::cout << "Start of main" << std::endl;
    Demo obj1;

    {
        static Demo obj2;       //Static object, so now it's scope become as file scope i.e it will be present till the file ends
                                //So even if it comes out of the block scope call will not be given to the destructor
                                //It will get memory in the data section
                                //But in our program it will not be accessible outside the block scope
                                //If we declare it as static global then it will be accessible from anywhere in the file
    }

    obj1.fun();
    //obj2.fun();       //Error: since it is out of the scope but still not deleted

    std::cout << "End of main" << std::endl;
    return 0;
}

/*  Output: 

    Start of main
    In constructor
    In constructor
    In fun
    End of main
    In destructor
    In destructor

*/