//Alejandro Leonel Cruz Carranza #CC104417

#include <iostream>
using namespace std;

unsigned long long int factorial(int n){
	unsigned long long int factorial = 1;
	int numFact = n;
	int i = 1;
	while (i <= numFact){
		factorial *= i;
		cout << " numFact = " << i << " valor = " << factorial << endl;
		i++;
	}
	return factorial;
}

int main(){
	int n;
	cout << "Calcula el factorial de un numero: ";
	cin >> n;
	cout << n << "! : " << factorial(n);
	return 0;
}
