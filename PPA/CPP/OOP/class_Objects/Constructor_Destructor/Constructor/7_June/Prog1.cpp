
#include <iostream>

using namespace std;

class DataSet {

	int numData;
	string typeData;

	public: 
		DataSet() {

			cout << "DataSet" << endl;
		}

		void infoData(int numData,string typeData) {

			this->numData = numData;
			this->typeData = typeData;

			cout << this->numData << endl;
			cout << this->typeData << endl;
		}
};

int main() {

	int numData;
	string typeData;

	cout << "Enter info: " << endl;
	cin >> numData;
	cin >> typeData;

	DataSet obj;
	obj.infoData(numData,typeData);
	return 0;
}






