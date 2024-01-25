#include <iostream>
#include <string>
#include <cmath>

#include "TutorialConfig.h"

int main(int argc, char* argv[]) {
	// Returns if there is no user input
	if(argc < 2) {
		std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
			<< Tutorial_VERSION_MINOR << std::endl;
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		return -1;
	}

	// User input and its power of 2
	const double inputValue = std::stod(argv[1]);
	std::cout << pow(inputValue, 2) << std::endl;
	
	return 0;
}
