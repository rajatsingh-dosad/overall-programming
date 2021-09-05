

#include <iostream>

class OlympicGolds
{

    int golds;
    std::string country;

public:
    OlympicGolds(std::string country, int golds)
    {

        std::cout << "In constructor" << std::endl;
        this->country = country;
        this->golds = golds;
    }

    // member new
    void *operator new(std::size_t osize)
    {

        std::cout << "My Operator New" << std::endl;

        //void *ptr = malloc(osize);              // Using this is more efficient then the second way
        // or 
        void *ptr =:: operator new(osize);    // This will give call to global new operator
        return ptr;
    }

    void disp()
    {

        std::cout << country << " : " << golds << std::endl;
    }

    ~OlympicGolds() {

        std::cout << "In destructor" << std::endl;
    }
};


//global new
void* operator new(std::size_t osize) {

    std::cout << "My Global Operator New" << std::endl;
    void *ptr = malloc(osize);
    return ptr;
}

int main()
{

    OlympicGolds *obj1 = new OlympicGolds("America", 39);
    obj1->disp();

    delete(obj1);
    return 0;
}

// Output:
/*
    My Operator New
    My Global Operator New
    In constructor
    America : 39
    In destructor
*/
