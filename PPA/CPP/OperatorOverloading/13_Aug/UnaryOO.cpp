
#include <iostream>


//Using Friend function

/*class Grade {

    int x;
    public:
        Grade(int x) {
            this->x = x;
        }

        void disp() {

            std::cout << x << std:: endl;
        }

        friend void operator-(Grade& ref) {

            ref.x = -(ref.x);
        }
};

int main() {

    Grade obj(10);

    obj.disp();     // 10

    -obj;

    obj.disp();     //-10
    return 0;
}
*/



// Using member function

/*class Grade {

    int x;
    public:
        Grade(int x) {
            this->x = x;
        }

        void disp() {

            std::cout << x << std:: endl;
        }

        void operator-() {

            this->x = -(this->x);
        }
};

int main() {

    Grade obj(10);

    obj.disp();     // 10

    -obj;

    obj.disp();     //-10
    return 0;
}
*/



//Using normal function

class Grade {

    int x;
    public:
        Grade(int x) {
            this->x = x;
        }

        void disp() {

            std::cout << x << std:: endl;
        }

        int getVal() {

            return x;
        }

};

Grade operator-(Grade& ref) {

    return Grade(-ref.getVal());
}

int main() {

    Grade obj(10);

    obj.disp();     // 10

    obj = -obj;

    obj.disp();     //-10
    return 0;
}