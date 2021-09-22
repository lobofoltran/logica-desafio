/* Estabeleça se a pessoa quer perder, manter 
ou engordar o seu peso e efetue um algoritmo de 
escolha das 3 opções, após a escolha, estabelecer 
quantos KG a pessoa tem para efetuar a conversão de 
Quilograma em Calorias, independente da opção escolhida, 
o resultado deve conter o mínimo e o máximo de calorias 
de acordo com os seguintes dados:
Para emagrecer - multiplique 20 ou 25 pelo peso escolhido
Para manter o peso - multiplique 25 ou 30 pelo peso escolhido
Para engordar - multiplique 30 ou 35 pelo peso escolhido */

#include <iostream>
#include <clocale>

int main () {
	int escolha;
	float peso = 0;
	float pesoForm = 0; 	// Fórmula de Peso.
	float pesoForm2 = 0;	// Fórmula de Peso 2.
	setlocale(LC_ALL,"Portuguese");
	
	std::cout	<< "Escolha uma das opções:" << std::endl << "(1) Emagrecer;" << std::endl << "(2) Manter o peso;" << std::endl << "(3) Ganhar peso." << std::endl << "Sua escolha: ";
	std::cin	>> escolha;
	
	if (escolha >= 1 && escolha <= 3) {
	std::cout	<< std::endl << "Digite seu peso em quilogramas (kg): ";
	std::cin	>> peso;
	} else {
		std::cout	<< std::endl << "Faça uma escolha correta!";
		return 0;
	}
	
	if (escolha == 1) {
		// Fórmula
		pesoForm = peso * 20;
		pesoForm2 = peso * 25;
		// Resultado
		std::cout	<< std::endl << "Resultado: Consuma no mínimo " << pesoForm << " e no máximo " << pesoForm2 << " calorias.";
	} else if (escolha == 2) {
		pesoForm = peso * 25;
		pesoForm2 = peso * 30;
		std::cout	<< std::endl << "Resultado: Consuma no mínimo " << pesoForm << " e no máximo " << pesoForm2 << " calorias.";
	} else if (escolha == 3) {
		pesoForm = peso * 30;
		pesoForm2 = peso * 35;
		std::cout	<< std::endl << "Resultado: Consuma no mínimo " << pesoForm << " e no máximo " << pesoForm2 << " calorias.";
	}
	
	return 0;
}
