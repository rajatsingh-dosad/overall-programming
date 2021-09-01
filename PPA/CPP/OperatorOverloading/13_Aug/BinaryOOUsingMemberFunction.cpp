
#include <iostream>

class C2W {

    int teachers = 0;
    int langs = 0;

    public:

        C2W(int teachers,int langs) {
            this->teachers = teachers;
            this->langs = langs;
        }

        void disp() {

            std::cout << "Teachers = " << teachers << "\t" << "Langs = " << langs << std::endl;
        }


        // The only difference between overloading using friend function and member function is in friend function we have to explicitly pass the reference of the class as friend function is not part of the class but in case of member function since it is part of the class we don't have to explicitly pass class reference becoz there is hidden this pointer already present as operator+(C2W *this,int x)


        void operator+(int x) {

            this->teachers = this->teachers + x;
            this->langs = this->langs + x;
        }
};

int main() {

    C2W obj1(2,6);
    obj1.disp();    // 2 6

    obj1 + 1;

    obj1.disp();    // 3 7
    return 0;
}