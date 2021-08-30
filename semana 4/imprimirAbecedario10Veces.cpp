//Alejandro Leonel Cruz Carranza #CC104417
#include <iostream>
using namespace std;

void imprimirAlfabeto(){
	char letra = 'a';
	while (letra <= 'z'){
		cout << letra << " ";
		letra ++;
	}
	cout << endl;
}

int main(){
	imprimirAlfabeto();
	return 0;
}
