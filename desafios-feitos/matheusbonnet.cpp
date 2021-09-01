// Alunos: Gustavo Lobo e André Luiz.
#include<iostream>
using namespace std;

int main () {
	float salario = 0;
	float salarioForm = 0; 	// "Salário Fórmula."
	float salarioForm2 = 0; // "Salário Fórmula 2."
	
	std::cout	<< "Digite o valor do salario: ";
	std::cin	>> salario;
	
	if (salario < 1900) {
		
		cout	<< endl << "Imposto cobrado (0% de imposto): " << "0" << endl;			// Neste exemplo a Fórmula de Salário será sempre 0.
		cout	<< "Salario (sem imposto): " << salario; 								// Quando o salário for menor que 1900, não haverá cobrança de impostos.
		
	} else if (salario >= 1900 && salario < 2500) {
		
		salarioForm = ( salario * 2 ) / 100;  	// Formúla = Cálculo de Imposto. (Salário * 2) / 100 (2 seria de 2% seria o valor do imposto). 
		salarioForm2 = salario - salarioForm; 	// A seguir calculamos o valor do Salário menos o imposto.
		
		cout	<< endl << "Imposto cobrado (2% de imposto): " << salarioForm << endl; 	// Resultado da Fórmula de porcentagem.
		cout	<< "Salario (-2% de imposto): " << salarioForm2; 						// Resultado da Fórmula de Salário menos Porcentagem de imposto.
		
	} else if (salario >= 2500 && salario < 3700) {
		salarioForm = ( salario * 3 ) / 100;
		salarioForm2 = salario - salarioForm;
		cout	<< endl << "Imposto cobrado (3% de imposto): " << salarioForm << endl;
		cout	<< "Salario (-3% de imposto): " << salarioForm2;
		
	} else if (salario >= 3700 && salario < 5000) {
		salarioForm = ( salario * 4.5 ) / 100;
		salarioForm2 = salario - salarioForm;
		cout	<< endl << "Imposto cobrado (4.5% de imposto): " << salarioForm << endl;
		cout	<< "Salario (-4.5% de imposto): " << salarioForm2;
		
	} else if (salario >= 5000) {
		salarioForm = ( salario * 6 ) / 100;
		salarioForm2 = salario - salarioForm;
		cout	<< endl << "Imposto cobrado (6% de imposto): " << salarioForm << endl;
		cout	<< "Salario (-6% de imposto): " << salarioForm2;
	}
	
	cout	<< endl << endl << "Alunos criadores: Gustavo Lobo e Andre Luiz.";
	
	return 0;
}
