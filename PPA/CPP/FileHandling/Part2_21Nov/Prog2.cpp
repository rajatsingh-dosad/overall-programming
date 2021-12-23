
#include <iostream>
#include <fstream>

int main() {

	std::ifstream infile;

	infile.open("founders.txt");
		
	std::string readData;

	while(infile) {

		getline(infile,readData);
		std::cout << readData << std::endl;
	}
	
	infile.close();

	infile.open("companies.txt");

	while(infile) {

		getline(infile,readData);
		std::cout << readData << std::endl;
	}

	infile.close();

	return 0;
}
