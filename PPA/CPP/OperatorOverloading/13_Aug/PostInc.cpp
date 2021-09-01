

#include <iostream>

// Using friend function

/*
class Placement {

    int noOfComp;

    public:
        Placement(int noOfComp) {

            this->noOfComp = noOfComp;
        }

        void disp() {

            std::cout << "Total companies = " << noOfComp << std::endl;
        }

        friend void operator++(Placement& ref, int) {

            ref.noOfComp = (ref.noOfComp)++;
        }
};

int main() {

    Placement obj(5);

    obj.disp();

    obj++;

    obj.disp();

    return 0;
}
*/




// Using member function

/*
class Placement {

    int noOfComp;

    public:
        Placement(int noOfComp) {

            this->noOfComp = noOfComp;
        }

        void disp() {

            std::cout << "Total companies = " << noOfComp << std::endl;
        }

        void operator++(int) {

            noOfComp = noOfComp++;
        }
};

int main() {

    Placement obj(5);

    obj.disp();

    obj++;

    obj.disp();
    return 0;
}
*/


// Using normal function

class Placement
{

    int noOfComp;

public:
    Placement(int noOfComp)
    {

        this->noOfComp = noOfComp;
    }

    int getNoOfComp() {

        return noOfComp;
    }

    void disp()
    {

        std::cout << "Total companies = " << noOfComp << std::endl;
    }
};

Placement operator++(Placement &ref,int) {

    int x = ref.getNoOfComp();
    return Placement(x++);
}

int main()
{

    Placement obj(5);

    obj.disp();

    obj = obj++;

    obj.disp();
    return 0;
}