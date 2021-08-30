//Alejandro Leonel Cruz Carranza #CC104417
#include <iostream>
using namespace std;
#include <string>


void obtenerDigitos(){
	cout << "Ingrese una cadena de texto o digitos sin espacios: ";
	string cadena;
	char  caracter;
	cin >> cadena;
	int i = 0;
	while (i < cadena.length()){
		caracter = cadena.at(i);
		if (isdigit(caracter))
		cout << caracter << endl;
		i++;
		
	}
	
}

int main(){
	obtenerDigitos();
	return 0;
}
