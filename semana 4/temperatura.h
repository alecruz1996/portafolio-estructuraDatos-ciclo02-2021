#include <iostream> // Modulos o librerias propios de C++ se colocan entre <>
using namespace std;

double leerTemperatura(){
	double temperatura;
	cout << "Ingrese un valor de temperatura: ";
	while(!(cin >> temperatura)){
		cout << "No es un valor de temperatura valida. Intente de nuevo." << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return temperatura;
}

int leerSeleccionUsuario(){
	int eleccion;
	
	cout << "Seleccione el tipo de conversion: " << endl;
	cout << "1 - De Celsius a fahrenheirt" << endl;
	cout << "2 - De celsius a kelvin" << endl;
	cout << "3 - De farenheit a Celsius" << endl;
	cout << "4 - De farenheit a Kelvin" << endl;
	cout << "5 - De Kelvin a Celsius" << endl;
	cout << "6 - De kelvin a fahrenheit" << endl;

	while(!(cin >> eleccion) || eleccion < 1 || eleccion > 6){
		cout << "Opcion no valida. Ingrese un valor entre 1 y 6: " << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return eleccion;
}
	
	
void convertirTemperatura(double temperatura, int tipo){
	double temperaturaConvertida;
	
	switch(tipo){
		case 1: // De Celsius a fahrenheirt
		temperaturaConvertida = 1.8 * temperatura + 32;
		cout << "La temepratura " << temperatura << " C equivale a " << temperaturaConvertida << " F. " << endl;
		break;
		
		case 2: // De celsius a kelvin
		temperaturaConvertida = temperatura + 273.15;
		cout << "La temepratura " << temperatura << " C equivale a " << temperaturaConvertida << " K. " << endl;
		break;
		
		case 3: // De farenheit a Celsius
		temperaturaConvertida = (temperatura - 32) / 1.8;
		cout << "La temepratura " << temperatura << " F equivale a " << temperaturaConvertida << " C. " << endl;
		break;
		
		case 4: // De farenheit a Kelvin
		temperaturaConvertida = (5/9)* (temperatura - 32) + 273.15;
		cout << "La temepratura " << temperatura << " F equivale a " << temperaturaConvertida << " K. " << endl;
		break;
		
		case 5: // De Kelvin a Celsius
		temperaturaConvertida = temperatura - 273.15;
		cout << "La temepratura " << temperatura << " K equivale a " << temperaturaConvertida << " C. " << endl;
		break;
		
		case 6: // De kelvin a fahrenheit
		temperaturaConvertida = 1.8 * (temperatura - 273.15) + 32;
		cout << "La temepratura " << temperatura << " K equivale a " << temperaturaConvertida << " F. " << endl;
		break;

	}
}





