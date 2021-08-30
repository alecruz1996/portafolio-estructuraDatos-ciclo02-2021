#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//Presentado por: Alejandro Leonel Cruz Carranza #CC104417
//Prototips..

string generarMovComp();
string obtMovJug();
void detGanador (string computadora, string jugador);
void proEntradaJugPiedra (string computadora);
void proEntradaJugPapel (string computadora);
void proEntradaJugTijera (string computadora);
void proEntradaJugLagarto (string computadora);
void proEntradaJugSpock (string computadora);

int main(){
	string movComputadora;
	string movJugador;
	
	movJugador = obtMovJug();
	movComputadora = generarMovComp();
	detGanador(movComputadora, movJugador);
	
	return 0;
}

//Implementacion

string generarMovComp(){
	string movimiento;
	int numAleatorio;
	
	// Genero numero Aleatorio
	srand(time(0));
	numAleatorio  = rand() % 5 + 1;
	
		switch(numAleatorio){
		case 1:
			movimiento = "piedra";
			break;
		case 2:
			movimiento = "papel";
			break;
		case 3:
			movimiento = "tijera";
			break;
		
		case 4:
			movimiento = "lagarto";
			break;
		
		case 5:
			movimiento = "spock";
			break;
	}
	
	cout << "Computadora: " << movimiento << "\n";
	
	return movimiento;
}

string obtMovJug (){
	string movimiento;
	
	cout << "(Para determinar el juego digite.:::piedra, papel, tijera, lagarto o spock ) \n !! Propura usar minusculas !! \n :::::Escriba aqui::::: ";
	cin >> movimiento;
	
	return movimiento;
}

void detGanador(string computadora, string jugador){
	if (computadora == jugador) {
		cout << "Empate!\n";
	}
	else if (jugador == "piedra"){
		proEntradaJugPiedra(computadora);
	}
	else if (jugador == "papel"){
		proEntradaJugPapel(computadora);
	}
	else if (jugador == "tijera"){
		proEntradaJugTijera(computadora);
	}
	else if (jugador == "lagarto"){
		proEntradaJugLagarto(computadora);
	}
	else if (jugador == "spock"){
		proEntradaJugSpock(computadora);
	}
	else {
		cout << "Entrada no valida. Ingrese piedra, papel, tijera, lagarto o spock. ¡¡Procure usar minusculas!! \n";
	}
	
}

void proEntradaJugPiedra(string computadora){
	if (computadora == "papel"){
		cout << "Computadora gana. Papel envuelve la piedra.\n";
	}
	else if (computadora == "spock"){
		cout << "Computadora gana. Spock desintegra la piedra.\n";
	}
	else if (computadora == "tijera"){
		cout << "Usted gana. Piedra aplasta las tijeras.\n";
	}
	else if (computadora == "lagarto"){
		cout << "Usted gana. Piedra aplasta a Lagarto.\n";
	}
	
}

void proEntradaJugPapel(string computadora){
	if (computadora == "tijera"){
		cout << "Computadora gana. Tijera corta Papel.\n";
	}
	else if (computadora == "lagarto"){
		cout << "Computadora gana. Lagarto devora al papel.\n";
	}
	else if (computadora == "piedra"){
		cout << "Usted gana. Papel envuelve la piedra.\n";
	}
	else if (computadora == "spock"){
		cout << "Usted gana. Papel desaprueba a spock.\n";
	}
	
}


void proEntradaJugTijera(string computadora){
	if (computadora == "piedra"){
		cout << "Computadora gana. Piedra aplasta a tijera.\n";
	}
	else if (computadora == "spock"){
		cout << "Computadora gana. Spock aplasta a tijera.\n";
	}
		else if (computadora == "papel"){
		cout << "Usted gana. Tijera corta a papel.\n";
	}
		else if (computadora == "lagarto"){
		cout << "Usted gana. Tijera decapita a lagarto.\n";
	}
	
}


void proEntradaJugLagarto(string computadora){
	if (computadora == "piedra"){
		cout << "Computadora gana. Piedra aplasta a Lagarto.\n";
	}
	else if (computadora == "tijera"){
		cout << "Computadora gana. Tijera decapita a lagarto.\n";
	}
	else if (computadora == "spock"){
		cout << "Usted gana. Lagarto envenena a Spock.\n";
	}
	else if (computadora == "papel"){
		cout << "Usted gana. Lagarto come a Papel.\n";
	}
	
}

void proEntradaJugSpock(string computadora){
	if (computadora == "papel"){
		cout << "Computadora gana. Papel desaprueba a Spock.\n";
	}
	else if (computadora == "lagarto"){
		cout << "Computadora gana. Lagarto envenena a Spock.\n";
	}
	else if (computadora == "tijera"){
		cout << "Usted gana. Spock aplasta a Tijeras.\n";
	}
	else if (computadora == "piedra"){
		cout << "Usted gana. Spock desintegra a Piedra.\n";
	}
}
//Presentado por: Alejandro Leonel Cruz Carranza #CC104417

