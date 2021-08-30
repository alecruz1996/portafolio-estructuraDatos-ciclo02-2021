#include <iostream> 
using namespace std; 
#include <math.h>  
#include <cmath>   
float x, y, z, area, sp; // sp es usado para el semiperimetro de un triangulo Escaleno
string tipo;


float tipoTriangulo(){
	cout << "=====================================" << endl << endl;
	cout << "Bienvenid@ a la aplicacion de Triangulo" << endl;
	cout << "Se determinara el tipo de triangulo y su area, para ello: " << endl;
	cout<< "Ingrese el primer lado" <<endl;
	cin>>x;
	cout<< "Ingrese el segundo lado" <<endl;
	cin>>y;
	cout<< "Ingrese el tercer lado" <<endl;
	cin>>z;
	cout << "=====================================" << endl;
	
	if ( (x==y) && (x==z) && (y==z)){
		tipo = "Equilatero";
		area = static_cast<float>( ((pow(x, 2)) * sqrt(3) )/4); // Area Equilatero: lado al cuadrado *  raiz cuadrada de 3 sobre 4
		cout << "El triangulo  es Equilatero, todos sus lados son iguales, su area es: " << area << " cm2"<< endl;
	}
	
	else if ( (x!=y) && (x!=z) && (z!=y)){
		tipo = "Escaleno";
		sp = static_cast<float>((x+y+z)/2); // Semiperimetro es sumando todos sus lados y dividrlo entre 2
		area = static_cast<float>(sqrt(sp*(sp-x)*(sp-y)* (sp-z) )); // 
		cout << "El triangulo  es Escaleno, todos sus lados son diferentes, su area es:" << area << " cm2" << endl;
	}
	
	else if ( (x==y) || (x==z) || (y==z)){
		area = static_cast<float>( ( y* sqrt ( (pow(x, 2)) - ( (pow(y, 2)) / 4))) /2 );
 	 	tipo = "Isoceles";
		cout << "El triangulo  es Isoceles, uno de sus lados es diferente a los otros dos, su area es: " << area << " cm2"  << endl;
	}

	return area;	

}
