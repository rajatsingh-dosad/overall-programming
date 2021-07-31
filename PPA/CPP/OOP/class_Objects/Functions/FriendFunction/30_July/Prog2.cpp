

// A function friendly to two classes

#include <iostream>

class Rajesh;   // declaration because we are using it in class Ashish before its definition

class Ashish {

    int laptop = 2;

    public:
            friend void lapAccess(Ashish &lapAccess, Rajesh &lapAcc);
};

class Rajesh {

    int laptop = 3;

    public:
            friend void lapAccess(Ashish &lapAccess, Rajesh &lapAcc);
};

void lapAccess(Ashish& refAshish, Rajesh& refRajesh) {

    std::cout << refAshish.laptop + refRajesh.laptop << std::endl;
}

int main() {

    Ashish obj1;
    Rajesh obj2;

    lapAccess(obj1,obj2);
    return 0;
}