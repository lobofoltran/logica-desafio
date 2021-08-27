#include <iostream>
#include <math.h>

int main() {
	float a = 0;
	float b = 0;
	float c = 0;
	float delta = 0;
	float raiz1 = 0;
	float raiz2 = 0;

	std::cout 	<< "Numero de a: ";
	std::cin 	>> a;

	std::cout 	<< "Numero de b: ";
	std::cin 	>> b;

	std::cout 	<< "Numero de c: ";
	std::cin 	>> c;
	
	delta = ( b * b ) - ( 4 * a * c );
	
	raiz1 = ( -b + sqrt ( delta )) / ( 2 * a );
	raiz2 = ( -b - sqrt ( delta )) / ( 2 * a );
	
	std::cout 	<< "\nRaiz 1: " << raiz1;
	std::cout 	<< "\nRaiz 2: " << raiz2;
    
	return 0;
}

