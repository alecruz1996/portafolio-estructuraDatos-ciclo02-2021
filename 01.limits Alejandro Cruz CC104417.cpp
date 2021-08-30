#include <iostream>
#include <limits>

using namespace std;

int main(){
	
	
	int imin = numeric_limits<int>::min(); //valor minimo que puede tener un Integer
	int imax = numeric_limits<int>::max(); //valor maximo que puede tener un Integer

	
	cout << " imin = " << imin << endl;
	cout << " imax = " << imax << "\n";
	cout << " Tamano de int : " << sizeof(int) << endl;

	float fmin = std::numeric_limits<float>::min();
	float fmax = std::numeric_limits<float>::max();
	
	cout << " fmin = " << fmin << endl;
	cout << " fmax = " << fmax << "\n";
	cout << " Tamano de float: " << sizeof(float) << endl;
	
	char cmin = numeric_limits<char>::min();
	char cmax = numeric_limits<char>::max();
	
	cout << " cmin = " << cmin << endl;
	cout << " cmax = " << cmax << endl;
	cout << " Tamano de char: " << sizeof(char) << endl;
	
	cout << "" << endl;
	
	cout << "========================================================"  << endl;
	cout << "Otros Limites para Tarea: Alejandro Cruz #CC104417"  << endl;
	cout << "========================================================"  << endl;
	
	cout << "" << endl;
	
	double dmin = numeric_limits<double>::min(); //valor minimo que puede tener un Double
	double dmax = numeric_limits<double>::max(); //valor minimo que puede tener un Double
	int longInt = sizeof(signed long int); // Valor Limite de Long Int
	int shortInt = sizeof(short int); // Valor Limite Short Int
	int wideChar = sizeof(wchar_t); // Valor de Tamaño WideChar
	
	cout << " Double Minimo = " << dmin << endl;
	cout << " Double Maximo = " << dmax << endl;	
	cout << " Long Int = " << longInt  << " bytes" << endl;
	cout << " Short Int = " << shortInt  << " bytes" << endl;
	cout << " Tamanio de wide character = " << wideChar  << " bytes" << endl;
	
	return 0;
}
