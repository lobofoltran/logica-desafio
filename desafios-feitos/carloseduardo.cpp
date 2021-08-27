#include<iostream>

int main () {
	int numero = 5;
	
	std::cout	<< "Digite um numero de 1 a 10: ";
	std::cin	>> numero;
	
	if (numero == 5) {
		std::cout	<< "Acertou";
	} else if (numero != 5) {
		std::cout	<< "Errou";
	}
	
	return 0;
}
