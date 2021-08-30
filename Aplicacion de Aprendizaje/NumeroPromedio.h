#include <iostream> // Modulos o librerias propios de C++ se colocan entre <>
using namespace std;


int j, o; // "j" la usaremos para la interaccion del for, "o" se usa para leer la cantidad de numeros
float arrNumPromedio[1000], promedio, suma; // Puesto que el arreglo requiere un indicador, se deja como maximo 1000

float* numPromedio(){
	
	cout <<  endl;
	cout << "====================================="<< endl;
	cout << "Bienvenid@ a la aplicacion de Numero Promedio: " << endl;	
	cout << "Se determinara el promedio de los numeros , para ello.: "<< endl;
	cout << "Ingrese la cantidad de numeros a ser analizados: " << endl;
    cin >> o;
    cout << endl;

	   // Almacenar los numeros de consola ingresados por usuario, por un bucle y un array
    for(j = 0; j < o; ++j)
    {
       cout << "Ingrese el # " << j + 1 << " : ";
       cin >> arrNumPromedio[j];
    }
    
        // Loop para almacenar y determinar el numero promedio del Arreglo
    for(j = 0;j < o; ++j)
    {
	suma += arrNumPromedio[j];
           
    }
    promedio = suma / o;
    cout << "El promedio total es = " << promedio;

	return arrNumPromedio;

}
	

