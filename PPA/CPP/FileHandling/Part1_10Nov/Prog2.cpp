
#include <iostream>
#include <fstream>

int main() {
	
	std::ofstream outfile("founders.txt");

	std::string inputData;
	
	std::cout << "Enter name: ";
/*
	do{	
		getline(std::cin,inputData);
		outfile << inputData;

	}while(inputData == " ");
*/


	getline(std::cin,inputData,'\n');
	outfile << inputData;

	outfile.close();
	return 0;
}
