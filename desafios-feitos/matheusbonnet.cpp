#include<iostream>

int main () {
	float salario = 0;
	float salarioForm = 0;
	float salarioForm2 = 0;
	
	std::cout	<< "Digite o valor do salario: ";
	std::cin	>> salario;
	
	if (salario < 1899) {
		std::cout	<< "Salario (sem imposto): " << salario;
	} else if (salario >= 1900 && salario <= 2499) {
		salarioForm = ( salario * 2 ) / 100;
		salarioForm2 = salario - salarioForm;
		std::cout	<< "Salario (2% de imposto): " << salarioForm2;
	} else if (salario >= 2500 && salario <= 3699) {
		salarioForm = ( salario * 3 ) / 100;
		salarioForm2 = salario - salarioForm;
		std::cout	<< "Salario (3% de imposto): " << salarioForm2;
	} else if (salario >= 3700 && salario <= 4999) {
		salarioForm = ( salario * 4.5 ) / 100;
		salarioForm2 = salario - salarioForm;
		std::cout	<< "Salario (4.5% de imposto): " << salarioForm2;
	} else if (salario >= 5000) {
		salarioForm = ( salario * 6 ) / 100;
		salarioForm2 = salario - salarioForm;
		std::cout	<< "Salario (6% de imposto): " << salarioForm2;
	}
	
	return 0;
}
