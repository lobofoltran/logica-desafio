#include<iostream>

int main () {
	int a = 0;
	int m = 0;
	int fr = 0;
	
	std::cout 	<< "Digite a massa (kg): ";
	std::cin 	>> m;
	
	std::cout 	<< "Digite a forca (N): ";
	std::cin 	>> fr;
	
	//formulas
	a = fr / m;

	std::cout 	<< "Aceleracao: " << a;
	
	return 0;
}
