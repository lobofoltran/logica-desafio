/* Monte um algoritmo que encontre o valor de 
aceleração adquirida pelo corpo, sendo o valor 
correspondente a massa é de 20 kg e a sua força 
resultante é igual a 220N encontre o valor de aceleração.

Fórmulas:
fr = m * a (para calcular força de aceleração)
a = fr / m (para calcular aceleração) */

#include <iostream>
#include <clocale>

int main () {
	int aceleracao = 0;
	int massa = 0;
	int forcaResultante = 0;
	setlocale(LC_ALL,"Portuguese");
	
	std::cout 	<< "Insira a massa (kg): ";
	std::cin 	>> massa;
	
	std::cout 	<< "Insira a força (N): ";
	std::cin 	>> forcaResultante;
	
	// Fórmula
	aceleracao = forcaResultante / massa;

	// Resultado
	std::cout 	<< std::endl << "Aceleração (resultado): " << aceleracao;
	
	// A massa deverá ser 20kg e a força deverá ser 220N.
	
	return 0;
}
