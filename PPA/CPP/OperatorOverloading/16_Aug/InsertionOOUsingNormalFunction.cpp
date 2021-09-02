
#include <iostream>

class Core2Web
{

    int langs;
    int teachers;

public:
    Core2Web(int langs, int teachers)
    {

        this->langs = langs;
        this->teachers = teachers;
    }

    int getLangs() {

        return langs;
    }

    int getTeachers() {

        return teachers;
    }
};

std::ostream &operator<<(std::ostream &out, Core2Web &c2w)
{

    out << c2w.getLangs() << std::endl;
    out << c2w.getTeachers() << std::endl;

    return out;
}

int main()
{

    Core2Web c2w(6, 2);

    std::cout << c2w << std::endl; //internally calls as - ostream& operator<<(ostream&,Core2Web)
    return 0;
}