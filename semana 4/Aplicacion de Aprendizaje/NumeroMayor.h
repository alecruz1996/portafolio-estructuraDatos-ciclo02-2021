#include <iostream> 
using namespace std; 
int a, b, c, d, e, num;

int numMayor(){
	
	cout << endl;
	cout << "====================================="<< endl;
	cout<< "Bienvendi@ a la aplicacion de Numero Mayor. " <<endl;
	cout<< "Se determinara el numero mayor, para ello:. " <<endl;
	cout<< "Ingrese el primer numero" <<endl;
	cin>>a;
	cout<< "Ingrese el segundo numero" <<endl;
	cin>>b;
	cout<< "Ingrese el tercer numero" <<endl;
	cin>>c;
	cout<< "Ingrese el cuarto numero" <<endl;
	cin>>d;
	cout<< "Ingrese el quinto numero" <<endl;
	cin>>e;	
		
	if ((a>b) && (a>c) && (a>d) && (a>e)){
	num = a;
	cout << "El numero mayor es: " << num;
}

	else if ((b>a) && (b>c) && (b>d) && (b>e)){
	num = b;
	cout << "El numero mayor es: " << num;
}

	else if ((c>a) && (c>b) && (c>d) && (c>e)){
	num = c;
	cout << "El numero mayor es: " << num;
}

	else if ((d>a) && (d>b) && (d>c) && (d>e)){
	num = d;
	cout << "El numero mayor es: " << num;
}

	else{
	num = e;
	cout << "El numero mayor es: " << num;
	}
	
	return num;
}
