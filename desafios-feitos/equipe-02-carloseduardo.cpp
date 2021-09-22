/* Jogo da adivinhação. Desenvolva um 
algoritmo que leia um número de 1 a 10 
e compare para saber se o número digitado 
está correto. */

#include <iostream>
#include <clocale>

int main () {
	int numero = 5;
	setlocale(LC_ALL,"Portuguese");
	
	std::cout	<< "Digite um número de 1 a 10: ";
	std::cin	>> numero;
	
	if (numero == 5) {
		std::cout	<< "Acertou";
	} else {
		std::cout	<< "Errou";
	}
	
	return 0;
}
