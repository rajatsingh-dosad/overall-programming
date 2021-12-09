
#include <iostream>
using namespace std;

class Template
{

public:
    template <typename T>
    void fun(T x)
    {

        cout << "Template" << endl;
    }

    void fun(int x)
    {
        cout << "int" << endl;
    }
};
int main()
{
    Template obj;
    obj.fun(10);
    obj.fun(20.5);
    return 0;
}
