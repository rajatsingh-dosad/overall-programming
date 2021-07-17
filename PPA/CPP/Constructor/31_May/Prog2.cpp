
#include <iostream>

using namespace std;

class OnlineLearning {

	int numEmp;
	string founder;
	string compName;

	public : 
		OnlineLearning() {

			cout << "India's top online learning platforms"<< endl;
		}

		OnlineLearning(string compName,string founder,int numEmp) {

			this->compName = compName;
			this->founder = founder;
			this->numEmp = numEmp;
		}

		void disp() {

			cout<< "Company Name = " <<compName << endl;
			cout<< "Company Founder = " <<founder << endl;
			cout<< "Total Employee = " <<numEmp << endl;

		}
};


int main() {
	
	OnlineLearning obj1;
	cout <<"\n";
	OnlineLearning obj2("Byju's","Raveendran Byju",7000);
	obj2.disp();

	cout <<"\n";
	OnlineLearning *obj3 = new OnlineLearning("Unacademy","Roman Saini",3190);
	obj3->disp();

	return 0;

}











