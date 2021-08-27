#include<iostream>

int main () {
	char nome[50];
	int pretensao = 0;
	
	std::cout	<< "Insira o seu nome: ";
	std::cin	>> nome;
	
	std::cout	<< "Insira a sua pretensao salarial: ";
	std::cin	>> pretensao;
	
	if (pretensao <= 1299) {
		std::cout	<< "O candidato se encaixa em um cargo de auxiliar de producao.";
	} else if (pretensao <= 2499) {
		std::cout	<< "O candidato se encaixa em um cargo de lideranca.";
	} else if (pretensao >= 2500) {
		std::cout	<< "O candidato nao se encaixa no que a empresa procura.";
	}
	
	return 0;
}
