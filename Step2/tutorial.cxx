#include <iostream>
#include <string>

#include "TutorialConfig.h"
#include "MathFunctions.h"

int main(int argc, char* argv[]) {
	// Returns if there is no user input
	if(argc < 2) {
		std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
			<< Tutorial_VERSION_MINOR << std::endl;
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		return -1;
	}

	const double inputValue = std::stod(argv[1]);
	const double outputValue = mathfunctions::sqrt(inputValue);

	std::cout << outputValue << std::endl;
	
	return 0;
}
