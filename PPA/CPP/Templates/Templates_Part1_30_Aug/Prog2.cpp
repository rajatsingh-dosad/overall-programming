
#include <iostream>
using namespace std;

class Employee {

    public:
        double sal;
        Employee(double sal) {
            this->sal = sal;
        }

        template<typename T>
        T max(T x, T y) {
            if(x > y)
                return x;
            return y;
        }

        friend bool operator >(Employee& emp1, Employee& emp2)  {

            return emp1.sal > emp2.sal;
        }
};

int main() {

    Employee ashish(100000);
    Employee kanha(200000);

    Employee maxSal = ashish.max(ashish,kanha);
    cout << maxSal.sal << endl;
}