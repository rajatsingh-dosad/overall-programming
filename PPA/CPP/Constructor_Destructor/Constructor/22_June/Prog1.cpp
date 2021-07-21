
#include <iostream>

using namespace std;

class Cricket {

	int score;

	public:
		Cricket() {

			cout << "Test Cricket" << endl;
		}

		Cricket(int score) {

			this->score = score;
			this->score += score;
		}

		int displayTotal() {

			return score;
		}

		float runRate() {


			return 4.28;
		}	
};


int main() {

	Cricket obj;
	Cricket firstIning(350);

	int runs = firstIning.displayTotal();
	float rRate = firstIning.runRate();

	cout << runs <<endl;
	cout << rRate << endl;
	return 0;
}
