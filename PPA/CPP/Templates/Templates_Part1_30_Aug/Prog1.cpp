
//Template in function/ function template

/*
#include <iostream>
using namespace std;

template<typename T>

T add(T x,T y) {
    return x+y;
}

int main() {

    cout << add(10,20) << endl;;
    cout << add(10.5,20.5) << endl;
    return 0;
}
*/



// Class Template

#include <iostream>
using namespace std;

class Template {

    public:
        template<typename T>

        T add(T x,T y) {
          return x+y;
        }
};

int main() {

    Template obj;
    cout << obj.add(10,20) << endl;
    cout << obj.add(10.5,20.5) << endl;
    return 0;
}