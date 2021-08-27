#include<iostream>

int main () {
	char nome[50];
	int pretensao = 0;
	
	std::cout	<< "Insira o seu nome: ";
	std::cin	>> nome;
	
	std::cout	<< "Insira a sua pretensao salarial: ";
	std::cin	>> pretensao;
	
	if (pretensao <= 1299) {
		std::cout	<< "\nNome: " 	<< nome;
		std::cout	<< "\nCargo disponivel: Auxiliar de Producao";
	} else if (pretensao <= 2499) {
		std::cout	<< "\nNome: " 	<< nome;
		std::cout	<< "\nCargo disponivel: Lideranca";
	} else if (pretensao >= 2500) {
		std::cout	<< "\nNome: " 	<< nome;
		std::cout	<< "\nCargo disponivel: Nao se encaixa na empresa";
	}
	
	return 0;
}
