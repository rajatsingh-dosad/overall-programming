
#include <iostream>

using namespace std;

class Podcast {

	string channelName;
	string host;
	int duration;

	public:
		Podcast(string channelName,string host,int duration) {
			
			cout << "parameterized constructor" <<endl;
			this->channelName = channelName;
			this->host = host;
			this->duration = duration;
		}

		Podcast(Podcast &obj) {
			
			cout << "Copy Constructor" << endl;
		}

		Podcast dispDetails(Podcast &ref) {

			return ref;
		}
};

int main() {

	Podcast obj1("BeerBiceps","R Allahabadia",2);
	Podcast obj2 = obj1;

	//Podcast obj3 = obj1.dispDetails(obj2);
	

	return 0;
}
