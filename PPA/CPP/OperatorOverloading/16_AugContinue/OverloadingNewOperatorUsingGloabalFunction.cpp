
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
};

void* operator new(std::size_t osize) {

    std::cout << "My Operator New" << std::endl;
    void *ptr = malloc(osize);
    return ptr;
}

int main() {

    OlympicGolds *obj1 = new OlympicGolds("America", 39);
    obj1->disp();

    return 0;
}

// Output:
/* My Operator New
   In constructor
   America : 39
*/
