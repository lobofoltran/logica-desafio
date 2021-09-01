// Alunos: Gustavo Lobo e André Luiz.
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float a = 0;
	float b = 0;
	float c = 0;
	float delta = 0;
	float raiz1 = 0;
	float raiz2 = 0;

	cout 	<< "Numero de a: ";
	cin 	>> a;

	cout 	<< "Numero de b: ";
	cin 	>> b;

	cout 	<< "Numero de c: ";
	cin 	>> c;
	
	// Fórmula Delta: (b² - 4.a.c)
	delta = ( b * b ) - ( 4 * a * c );
	
	// Fórmula Bhaskara: (-b +/- ((raiz de delta)) / (2.a)
	raiz1 = ( -b + sqrt ( delta )) / ( 2 * a );
	raiz2 = ( -b - sqrt ( delta )) / ( 2 * a );
	
	cout 	<< endl << "Raiz 1: " << raiz1;
	cout 	<< endl << "Raiz 2: " << raiz2;
    
    // Bkashara solicitada (por no algoritmo): a = 3x²; b = -2x; c = -8.
    // Resultados: Raiz 1: 2; Raiz 2: -1.333.
    
	return 0;
}
