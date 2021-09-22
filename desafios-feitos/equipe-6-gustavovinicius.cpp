/* Crie um programa para ler as medidas dos lados de dois 
triângulos X e Y. em seguida, mostrar o valor das áreas 
dos dois triângulos e dizer qual dos dois triângulos 
possui a maior área.

Fórmula para o cálculo da área:
Area Raíz p (p-a) (p-b) (p-c), onde p = (a + b + c) / 2 */

#include <iostream>
#include <clocale>

int main () {
	float a1 = 0; // Área A do Triângulo 1
	float b1 = 0; // Área B do Triângulo 1
	float c1 = 0; // Área C do Triângulo 1
	float a2 = 0; // Área A do Triângulo 2
	float b2 = 0; // Área B do Triângulo 2
	float c2 = 0; // Área C do Triângulo 2
	float p1 = 0; // Área Raiz do Triângulo 1
	float p2 = 0; // Área Raiz do Triângulo 2
	setlocale(LC_ALL,"Portuguese");
	
	std::cout	<< "Digite a medida A do triângulo 1: ";
	std::cin	>> a1;
	
	std::cout	<< "Digite a medida B do triângulo 1: ";
	std::cin	>> b1;
	
	std::cout	<< "Digite a medida C do triângulo 1: ";
	std::cin	>> c1;
	
	// Fórmula Triângulo 1:
	p1 = (a1 + b1 + c1) / 2;
	
	std::cout 	<< std::endl << "Área Raiz do Triângulo 1: " << p1;

	std::cout	<< std::endl << std::endl << "Digite a medida A do triângulo 2: ";
	std::cin	>> a2;
	
	std::cout	<< "Digite a medida B do triângulo 2: ";
	std::cin	>> b2;
	
	std::cout	<< "Digite a medida C do triângulo 2: ";
	std::cin	>> c2;
	
	// Fórmula Triângulo 2:
	p2 = a2 + b2 + c2 / 2;
	
	std::cout 	<< std::endl << "Área do Triângulo 2: " << p2;
	
	if (p1 == p2) {
		std::cout	<< std::endl << std::endl << "Área dos Triângulos Iguais";
	} else if (p1 < p2) {
		std::cout	<< std::endl << std::endl << "Área do Triângulo 2 maior";
	} else if (p1 > p2) {
		std::cout	<< std::endl << std::endl << "Área do Triângulo 1 maior";
	}
	
	return 0;
}
