/* Desenvolva um programa que calcule o imposto em que o usuário 
irá ter que pagar dependendo do seu salário, levando em consideração: 
salários maiores que 1900 resultarão em 2% de imposto, 2500 3%, 
3700 4.5% e acima de 5000 resultará em 6% de imposto, valores a 
baixo de 1900 não precisam pagar. */

#include <iostream>
#include <clocale>

int main () {
	float salario = 0;
	float salarioForm = 0; 	// Salário Fórmula.
	float salarioForm2 = 0; // Salário Fórmula 2.
	setlocale(LC_ALL,"Portuguese");
	
	std::cout	<< "--- * Calculadora de Imposto * ----" << std::endl << std::endl << "Digite o valor do salário (R$): ";
	std::cin	>> salario;
	
	if (salario < 1900) {
		std::cout	<< std::endl << "Imposto cobrado (0% de imposto): R$ " << "0" << std::endl; // Neste exemplo a Fórmula de Salário será sempre 0.
		std::cout	<< "Salário (sem imposto): R$ " << salario;				 // Quando o salário for menor que 1900, não haverá cobrança de impostos.
	} else if (salario >= 1900 && salario < 2500) {
		salarioForm = ( salario * 2 ) / 100; 							// Formúla = Cálculo de Imposto. (Salário * 2) / 100 (2 seria de 2% seria o valor do imposto). 
		salarioForm2 = salario - salarioForm; 							// A seguir calculamos o valor do Salário menos o imposto.
		std::cout	<< std::endl << "Imposto cobrado (2% de imposto): R$ " << salarioForm; 	// Resultado da Fórmula de porcentagem.
		std::cout	<< std::endl << "Salário (-2% de imposto): R$ " << salarioForm2; 	// Resultado da Fórmula de Salário menos Porcentagem de imposto.
	} else if (salario >= 2500 && salario < 3700) {
		salarioForm = ( salario * 3 ) / 100;
		salarioForm2 = salario - salarioForm;
		std::cout	<< std::endl << "Imposto cobrado (3% de imposto): R$ " << salarioForm << std::endl;
		std::cout	<< "Salário (-3% de imposto): R$ " << salarioForm2;
	} else if (salario >= 3700 && salario < 5000) {
		salarioForm = ( salario * 4.5 ) / 100;
		salarioForm2 = salario - salarioForm;
		std::cout	<< std::endl << "Imposto cobrado (4.5% de imposto): R$ " << salarioForm << std::endl;
		std::cout	<< "Salário (-4.5% de imposto): R$ " << salarioForm2;
	} else if (salario >= 5000) {
		salarioForm = ( salario * 6 ) / 100;
		salarioForm2 = salario - salarioForm;
		std::cout	<< std::endl << "Imposto cobrado (6% de imposto): R$ " << salarioForm << std::endl;
		std::cout	<< "Salário (-6% de imposto): R$ " << salarioForm2;
	}
	
	return 0;
}
