#include <iostream>
using namespace std;

namespace metY{
	double y = 6.6;
	void imprimirY(){
		cout << y << endl; // Usando clase std puedo imprimir sin declarar en objeto cout y endl
	}
}

namespace metZ{
	string z = "Imprimiendo Z";
	void imprimirZ(){
		std::cout << z << std::endl; // Sin usar el namespace inicial puedo imprimir como clase.objeto
	}
}

int main(){
	metY::imprimirY();
	metZ::imprimirZ();
	return 0;
}
