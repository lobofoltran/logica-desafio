/* Valentina estava em sua aula de matemática quando sua 
professora a questionou sobre um número e quais números 
dividiam este determinado número, infelizmente ela não 
conseguiu responder! Ajude ela criando um algoritmo em C++ 
que receba um número e que questione ao usuário dois outros 
números que dividam o mesmo. E depois o algoritmo deve informar 
ao usuario caso tenha tido ou sucesso ou uma falha. */

#include <iostream>
#include <clocale>

int main () {
	int numero = 0;
	int numero1 = 0;
	int numero2 = 0;
	setlocale(LC_ALL,"Portuguese");
	
	std::cout 	<< "Digite o número que sera divido: ";
	std::cin 	>> numero;
	
	std::cout 	<< std::endl << "Digite um número que o dividira: ";
	std::cin 	>> numero1;
	
	std::cout 	<< "Digite outro número que o dividira: ";
	std::cin 	>> numero2;
	
	if (numero % numero1 == 0 && numero % numero2 == 0) {
		std::cout << std::endl << "O numero " << numero << " é divisível por: " << numero1 << " e por " << numero2;
	} else {
		std::cout << std::endl << "Falha na operação";
	}
	
	return 0;
}
