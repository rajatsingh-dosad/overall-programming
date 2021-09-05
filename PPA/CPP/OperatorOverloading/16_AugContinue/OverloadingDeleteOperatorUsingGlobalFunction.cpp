

#include <iostream>

class OlympicGolds {

    int golds;
    std::string country;

    public:
        OlympicGolds(std::string country, int golds) {

            std::cout << "In constructor" << std::endl;
            this->country = country;
            this->golds = golds;
        }

        void disp() {

            std::cout << country << " : " << golds << std::endl;
        }

        ~OlympicGolds() {

            std::cout << "In destructor" << std::endl;
        }
};

void operator delete(void *ptr) {

    std::cout << "My Operator delete"  << std::endl;
    free(ptr);
}

int main() {

    OlympicGolds *obj1 = new OlympicGolds("America", 39);
    obj1->disp();

    delete(obj1);

    return 0;
}

// Output:
/* In constructor
   America : 39
   In destructor
   My Operator delete
*/
