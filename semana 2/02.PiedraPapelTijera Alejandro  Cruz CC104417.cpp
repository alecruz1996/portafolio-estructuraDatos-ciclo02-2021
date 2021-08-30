#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
	int movJug;
	cout << "======================================================== \n";
	cout << "Presentado por: Alejandro Leonel Cruz Carranza #CC104417 \n";
	cout << "======================================================== \n \n";

	cout << "Jugemos a piedra, papel o tijera, selecciona tu movimiento \n";
	cout << " 1. Piedra \n 2. Papel \n 3. Tijera \n 4. Lagarto \n 5. Spock \n  #: ";
	cin >> movJug;
	srand(time(0));
	string movComp;
	int numMov = rand() % 5 + 1;
	switch(numMov){
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		
		case 4:
			movComp = "Lagarto";
			break;
		
		case 5:
			movComp = "Spock";
			break;
	}
	
	cout << " La computadora escogio: " << movComp << endl;
	if(movJug == numMov){
		cout << " Empate \n";
	} 
	
	else if ((movJug == 1) && (numMov == 3) ){ //piedra aplasta las tijeras
		cout << " Ganaste \n";
	}
	
	else if ((movJug == 1) && (numMov == 4) ){ // piedra aplasta al lagarto
		cout << " Ganaste \n";
	}
	
	else if ((movJug == 2) && (numMov == 1) ){ // papel envuelve la piedra
		cout << " Ganaste \n";
	}
	
	else if ((movJug == 2) && (numMov == 5) ){ // papel desaprueba a Spock
		cout << " Ganaste \n";
	}
	
	else if ((movJug == 3) && (numMov == 2) ){ // tijeras cortan el papel
		cout << " Ganaste \n";
	}
	
	else if ((movJug == 3) && (numMov == 4) ){ // tijeras decapitan al lagarto
		cout << " Ganaste \n";
	}
	
	else if ((movJug == 4) && (numMov == 5) ){ // lagarto envenena a Spock
		cout << " Ganaste \n";
	}
	
	else if ((movJug == 4) && (numMov == 2) ){ // lagarto devora el papel
		cout << " Ganaste \n";
	}

	else if ((movJug == 5) && (numMov == 3) ){ // Spock aplasta las tijeras
		cout << " Ganaste \n";
	}
	
	else if ((movJug == 5) && (numMov == 1) ){ // Spock desintegra la piedra
		cout << " Ganaste \n";
	}
		
	else {
		cout << " Perdiste \n";
	}
	return 0;
	
}	

