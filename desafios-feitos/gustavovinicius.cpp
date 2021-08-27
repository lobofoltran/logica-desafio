#include<iostream>

int main () {
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	int p1 = 0;
	int p2 = 0;
	
	std::cout	<< "Digite a medida A do triangulo 1: ";
	std::cin	>> a1;
	
	std::cout	<< "Digite a medida B do triangulo 1: ";
	std::cin	>> b1;
	
	std::cout	<< "Digite a medida C do triangulo 1: ";
	std::cin	>> c1;
	
	// Fórmula Triângulo 1:
	p1 = a1 + b1 + c1 / 2;
	
	std::cout 	<< "\nArea do Triangulo 1: " << p1;

	std::cout	<< "\n\nDigite a medida A do triangulo 2: ";
	std::cin	>> a2;
	
	std::cout	<< "Digite a medida B do triangulo 2: ";
	std::cin	>> b2;
	
	std::cout	<< "Digite a medida C do triangulo 2: ";
	std::cin	>> c2;
	
	// Fórmula Triângulo 2:
	p2 = a2 + b2 + c2 / 2;
	
	std::cout 	<< "\nArea do Triangulo 2: " << p2;
	
	if (p1 == p2) {
		std::cout	<< "\n\nAreas dos Triangulos Iguais";
	} else if (p1 < p2) {
		std::cout	<< "\n\nArea do Triangulo 2 maior";
	} else if (p1 > p2) {
		std::cout	<< "\n\nArea do Triangulo 1 maior";
	}
	
	return 0;
}
