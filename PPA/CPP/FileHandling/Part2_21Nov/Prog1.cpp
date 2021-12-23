
#include <iostream>
#include <fstream>

int main() {

	std::ifstream inFile("founders.txt");

	std::string readData;
	
	while(inFile) {
		//OR
	//while(inFile.eof() == 0) {
		getline(inFile,readData);
		std::cout << readData << std::endl;
	}

	inFile.close();
	return 0;
}
