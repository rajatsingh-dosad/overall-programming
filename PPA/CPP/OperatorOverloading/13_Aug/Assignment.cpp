
// obj1 + obj1 - Addition of both object

// Using friend function

#include <iostream>

/*class Family {

    int boys;
    int girls;

    public:

        Family() {}

        Family(int boys, int girls) {

            this->boys = boys;
            this->girls = girls;
        }

        void display() {

            std::cout << "Boys = " << boys << "\t" << "Girls = " << girls << std::endl;
        }


        friend Family operator+(Family& obj1 , Family& obj2) {

            Family obj3;
            obj3.boys = obj1.boys + obj2.boys;
            obj3.girls = obj1.girls + obj2.girls;

            return obj3;
        }

};

int main() {

    Family myFamily(3,1);
    Family mausiFamily(3,1);

    Family totalGirls_Boys;
    myFamily.display();
    mausiFamily.display();

    totalGirls_Boys = myFamily + mausiFamily;

    totalGirls_Boys.display();
    return 0;
}
*/



// Using member function

/*class Family {

    int boys;
    int girls;

    public:

        Family() {}

        Family(int boys, int girls) {

            this->boys = boys;
            this->girls = girls;
        }

        void display() {

            std::cout << "Boys = " << boys << "\t" << "Girls = " << girls << std::endl;
        }


        Family operator+(Family& obj2) {

            Family obj3;
            obj3.boys = this->boys + obj2.boys;
            obj3.girls = this->girls + obj2.girls;

            return obj3;
        }

};

int main() {

    Family myFamily(3,1);
    Family mausiFamily(3,1);

    Family totalGirls_Boys;
    myFamily.display();
    mausiFamily.display();

    totalGirls_Boys = myFamily + mausiFamily;

    totalGirls_Boys.display();
    return 0;
}
*/


// Using normal function

class Family {

    int boys;
    int girls;

    public:

        Family() {}

        Family(int boys, int girls) {

            this->boys = boys;
            this->girls = girls;
        }

        void display() {

            std::cout << "Boys = " << boys << "\t" << "Girls = " << girls << std::endl;
        }


        int getBoys() {

            return boys;
        }

        int getGirls() {

            return girls;
        }   
};

Family operator+(Family& obj1 , Family& obj2) {

            return Family(obj1.getBoys() + obj2.getBoys(), obj1.getGirls() + obj2.getGirls());
}


int main() {

    Family myFamily(3,1);
    Family mausiFamily(3,1);

    Family totalGirls_Boys;
    myFamily.display();
    mausiFamily.display();

    totalGirls_Boys = myFamily + mausiFamily;

    totalGirls_Boys.display();
    return 0;
}
