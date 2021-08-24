

// Operator overloading can be achieved using three ways:
// 1) using normal function
// 2) using member function
// 3) using friend function

// Here we are achieving using friend function

#include <iostream>

class AddTwo {

    private:
        int x = 10;
        int y = 20;

    public: 
        friend int operator+(AddTwo& ,AddTwo&);
};

int operator+(AddTwo& obj1, AddTwo& obj2) {

    return obj1.x + obj2.y;
}

int main() {

    AddTwo obj1;
    AddTwo obj2;

    std::cout << obj1 + obj2 << std::endl;  // AddTwo operator+(obj1,obj2)
    return 0;
}


