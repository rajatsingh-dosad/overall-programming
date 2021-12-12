
#include <iostream>
#include <map>

int main() {

	// way1 to write map
	
	std::multimap<int,std::string> player = {{18,"Virat"},{7,"Dhoni"},{45,"Rohit"},{18,"Hardik"}};

	for(auto itr = player.begin();itr!=player.end();itr++) {

		std::cout << itr-> first << " " << itr-> second << std::endl;
	}

	
	std::cout << "=======================" << std::endl;
	
	
	
	
	// way2
	
	std::map<int,std::string> player1;

	player1[18] = "Virat";
	player1[7] = "Dhoni";
	player1[45]  = "Rohi";
	player1[18] = "Hardik";
	
	for(auto itr = player1.begin();itr!=player1.end();itr++) {

		std::cout << itr-> first << " " << itr-> second << std::endl;
	}
	
	
	std::cout << "=======================" << std::endl;


	// way3
	std::map<int,std::string> player2;
	player2.insert(std::pair<int,std::string>(45,"Rohit"));
	player2.insert(std::pair<int,std::string>(7,"Dhoni"));
	player2.insert(std::pair<int,std::string>(18,"Virat"));
	
	for(auto itr = player2.begin();itr!=player2.end();itr++) {

		std::cout << itr-> first << " " << itr-> second << std::endl;
	}

	

	return 0;
}
