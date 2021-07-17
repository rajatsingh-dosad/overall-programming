
#include <iostream>
using namespace std;

class Core2Web {

	int myChari = 0;
	void lang() {

		cout << "Python, java, PPA" << endl;

	}

	public: 
		void admission() {

			cout << "Take admission" << endl;
			lang();
			cout << myChari << endl;
		}
};

int main() {

	Core2Web obj;
	obj.admission();
	return 0;
}
