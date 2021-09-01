
// Since we are using a normal function so even with the help of the class object we can't access the private variables hence inorder to access the private variables we are using getters method

#include <iostream>

class C2W {

    int teachers = 0;
    int langs = 0;

    public:

        C2W(int teachers,int langs) {
            this->teachers = teachers;
            this->langs = langs;
        }

        int getTeachers() {
            return teachers;
        }

        int getLangs() {
            return langs;
        }

        void disp() {

            std::cout << "Teachers = " << teachers << "\t" << "Langs = " << langs << std::endl;
        } 
};

C2W operator+(C2W& ref, int x) {

    return C2W(ref.getTeachers()+x, ref.getLangs()+x);
}

int main() {

    C2W obj1(2,6);
    obj1.disp();    // 2 6

    obj1 =  obj1 + 1;

    obj1.disp();    // 3 7
    return 0;
}