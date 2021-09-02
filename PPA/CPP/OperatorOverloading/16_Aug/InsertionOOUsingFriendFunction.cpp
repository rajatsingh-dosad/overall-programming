
#include <iostream>

class Core2Web {

    int langs;
    int teachers;

    public:
        Core2Web(int langs, int teachers) {

            this->langs  = langs;
            this->teachers = teachers;
        }

        friend std::ostream& operator<<(std::ostream& out , Core2Web& c2w) {

            out << c2w.langs << std::endl;
            out << c2w.teachers << std::endl;

            return out; 
        }
};

int main() {

    Core2Web c2w(6,2);

    std::cout << c2w << std::endl;    //internally calls as - ostream& operator<<(ostream&,Core2Web)
    return 0;
}