
#include <iostream>

class Player {
	
	std::string name;
	int jerNo;

	public:

		Player() {

		}

		Player(std::string name, int jerNo) {

			this->name = name;
			this->jerNo = jerNo;
		}

		void details() {
			
			std::cout << name << std::endl;
			std::cout << jerNo << std::endl;
		}
};

class Cricket {
	
	Player cric;
	int runs;

	public:
		Cricket(const Player& cric,int runs) {

			this->cric = cric;
			this->runs = runs;
		}

		void info() {

			cric.details();
			std::cout << runs << std::endl;
		}
};

class Football {
	
	Player foot;
	int goals;

	public:
		Football(const Player& foot,int goals) {

			this->foot = foot;
			this->goals = goals;
		}

		void info() {

			foot.details();
			std::cout << goals << std::endl;
		}
};

int main() {

	Cricket obj1({"Virat",18},12000);
	Football obj2({"Messi",10},1000);

	obj1.info();
	obj2.info();

	return 0;
}
