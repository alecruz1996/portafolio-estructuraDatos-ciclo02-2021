//Alejandro Leonel Cruz Carranza #CC104417
#include <iostream> // Modulos o librerias propios de C++ se colocan entre<>
#include "triangulo.h"
#include "NumeroMayor.h"
#include "NumeroPromedio.h"

int eleccion;
int leerSeleccionUsuario(){
//int eleccion;
	cout << "=====================================" << endl;
	cout << "Seleccione la aplicacion requerida: " << endl;
	cout << "1 - Calcular Area de triangulo" << endl;
	cout << "2 - Calcular Numero Mayor" << endl;
	cout << "3 - Calcular Numero Promedio" << endl;
	cout << "====================================="<< endl;
	cout << "# :  ";
	
	while(!(cin >> eleccion) || eleccion < 1 || eleccion > 3){
		cout << "Opcion no valida. Ingrese un valor entre 1 y 3: " << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return eleccion;
}

int main(){
	eleccion = leerSeleccionUsuario();
	
	if (eleccion == 1){
		float area = tipoTriangulo ();
	}
	  else if(eleccion == 2)
	 {
		int num = numMayor();
	}
	
	  else if(eleccion == 3)
	 {
		float* arrNumPromedio = numPromedio();
	}


	return 0;
}
