// Alunos: Gustavo Lobo e André Luiz.
#include<iostream>

int main () {
	int a = 0;
	int m = 0;
	int fr = 0;
	
	std::cout 	<< "Digite a massa (kg): ";
	std::cin 	>> m;
	
	std::cout 	<< "Digite a forca (N): ";
	std::cin 	>> fr;
	
	// Fórmulas
	a = fr / m;

	std::cout 	<< "Aceleracao: " << a;
	
	// A massa deverá ser 20kg e a força deverá ser 220N.
	
	return 0;
}
