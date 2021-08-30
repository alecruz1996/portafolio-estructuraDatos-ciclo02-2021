#include <iostream>

namespace MetImprimir{
	int x = 5;
	void printX(){
		// Esta es una función:
		std::cout << x << std::endl;
	}
}

int main() {
	MetImprimir::printX();
	//std::cout << 'j' << std::endl;
	return 0;
}
