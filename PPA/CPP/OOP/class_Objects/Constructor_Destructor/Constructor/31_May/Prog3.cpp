
#include <iostream>

using namespace std;

class Employee {
		
	int empId;
	string empName;

	public:
		Employee() {

			cout << "Employee Constructor" << endl;
		}

		Employee(int empId, string empName) {

			this->empId = empId;
			this->empName = empName;
		}

		void empInfo() {

			cout << "Employee Id = " << empId << endl;
			cout << "Employee Name = " << empName << endl;
		}
};

class Company {
	
	string compName;
	Employee emp;

	public : 

		Company() {

			cout << "Rajat";
		}

		Company(string compName, Employee obj) {

			this->compName = compName;
			this-> emp = obj;
		}

		void display() {

			emp.empInfo();
		}
};


int main() {
	
	Employee obj1(215,"Rahul");
	
	Company obj2("BMC Software",obj1);
	obj2.display();
}

