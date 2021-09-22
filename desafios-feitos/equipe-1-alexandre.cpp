/* Dada a equação de segundo grau, | 3x² -2x -8 = 0 | 
e usando a biblioteca "#include <math.h>". Construa 
um programa no Dev C++ que utilize a formula de 
Bhaskara para imprimir os valores finais de x1 e x2. */

#include <iostream>
#include <math.h>
#include <clocale>

int main () {
	float a = 0;
	float b = 0;
	float c = 0;
	float delta = 0;
	float raiz1 = 0;
	float raiz2 = 0;
	setlocale(LC_ALL,"Portuguese");

	std::cout 	<< "--- * Calculadora de Bhaskara * ---" << std::endl << std::endl;
	std::cout 	<< "Insira o número de a: ";
	std::cin 	>> a;

	std::cout 	<< "Insira o número de b: ";
	std::cin 	>> b;

	std::cout 	<< "Insira o número de c: ";
	std::cin 	>> c;
	
	// Fórmula Delta: (b² - 4.a.c)
	delta = ( b * b ) - ( 4 * a * c );
	
	// Fórmula Bhaskara: (-b +/- ((raiz de delta)) / (2.a)
	raiz1 = ( -b + sqrt ( delta )) / ( 2 * a );
	raiz2 = ( -b - sqrt ( delta )) / ( 2 * a );
	
	std::cout << std::endl << "Raiz 1: " << raiz1;
	std::cout << std::endl << "Raiz 2: " << raiz2;
    
    // Bkashara solicitada (por no algoritmo): a = 3x²; b = -2x; c = -8.
    // Resultados: Raiz 1: 2; Raiz 2: -1.333.
    
return 0;
}
