
//Static function can be called using object as well as class Name

#include <iostream>

class VirginGalentic {

    static int x;

    public:
        static void spaceTour() {

            std::cout << "Tour with Richard Branson" << std::endl;
        }
};

int VirginGalentic::x = 1;

int main() {

    VirginGalentic obj;
    VirginGalentic::spaceTour();
    obj.spaceTour();

    return 0;
}