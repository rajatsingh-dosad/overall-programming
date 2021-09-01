
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

        friend void operator+(C2W& ref, int x) {

            ref.teachers = ref.teachers + x;
            ref.langs = ref.langs + x;
        }
};

int main() {

    C2W obj1(2,6);
    obj1.disp();    // 2 6

    obj1 + 1;       // internally it calls operator+(C2W, int)

    obj1.disp();    // 3 7
    return 0;
}