/* A empresa Nebulosa, uma empresa de desenvolvimento de aparelhos 
humidificadores e de sanitização de ambientes esta preste a aumentar 
o seu quadro de funcionários pretendendo assim disponibilizar até 
quatro vagas, os candidatos receberam um formulário onde pede para que 
insiram o nome, pretensão salarial. Desenvolva um algoritmo de validação 
de candidatos onde se a pretensão salarial do candidato for menor que 1.300 
será apresentado um cargo de auxiliar de produção, caso o salário esteja 
entre 1.300 a 2.500 será apresentado um cargo de liderança, já se estiver 
acima de 2.500 o perfil do candidato não se encaixa no que a empresa procura.
O programa deve receber o nome do candidato e pretensão salarial e apresentar 
o cargo condizente. */

#include <iostream>
#include <clocale>

int main () {
	std::string nome;
	int pretensao = 0;
	setlocale(LC_ALL,"Portuguese");
	
	std::cout	<< "Insira o seu nome: ";
	getline(std::cin, nome); // Função getline utilizada para pegar o nome completo.
	
	std::cout	<< "Insira a sua pretensão salarial: ";
	std::cin	>> pretensao;
	
	if (pretensao > 0 && pretensao < 1300) {
		std::cout	<< std::endl << "Nome do candidato: " << nome << std::endl;
		std::cout	<< "Você se encaixa em um cargo de auxiliar de produção.";
	} else if (pretensao >= 1300 && pretensao < 2500) {		
		std::cout	<< std::endl << "Nome do candidato: " << nome << std::endl;
		std::cout	<< "Você se encaixa em um cargo de liderança.";
	} else if (pretensao >= 2500) {
		std::cout	<< std::endl << "Nome do candidato: " << nome << std::endl;
		std::cout	<< "Você não se encaixa no que a empresa procura.";
	} else {
		std::cout	<< std::endl << "Digite um dado válido!";
	}
	
	return 0;
}
