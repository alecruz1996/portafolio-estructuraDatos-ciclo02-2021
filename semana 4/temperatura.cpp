#include <iostream> // Modulos o librerias propios de C++ se colocan entre<>
#include "temperatura.h" // Modulos personalizados que escribimos entre ""

using namespace std;

int main(){
	
	cout << "------------ Convertir temperaturas ---------" << endl;
	
	double temperatura;
	int eleccion;
	
	temperatura = leerTemperatura();
	eleccion = leerSeleccionUsuario();
	convertirTemperatura(temperatura, eleccion);
	
	return 0;
}
