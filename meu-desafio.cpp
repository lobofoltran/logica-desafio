/* Crie um algoritmo que converta Metros para Polegadas, 
Pés, Jardas, Milhas, Centímetros e Quilômetros. Fórmulas:
po = m * 39.37; pe = m * 3.281; ja = m * 1.094; mi = m / 1609; 
cm = m * 100; km = m / 1000. Sendo, então: m = metros, po = polegadas, 
pe = pés, ja = jardas, mi = milhas, cm = centimetros, km = quilômetros. */

#include <iostream>
#include <clocale>

int main () {
	float m = 0;  	// metros
	float po = 0; 	// polegadas
	float pe = 0; 	// pés
	float ja = 0; 	// jardas
	float mi = 0; 	// milhas
	float cm = 0; 	// centímetros
	float km = 0; 	// quilômetros
	setlocale(LC_ALL,"Portuguese");
		
	std::cout 	<< "Digite o número de Metros (m): ";
	std::cin	>> m;
	
	// Fórmulas
	po = m * 39.37;
	pe = m * 3.281;
	ja = m * 1.094;
	mi = m / 1609;
	cm = m * 100;
	km = m / 1000;
	
	std::cout	<< std::endl << "Resultado em Polegadas: " 	 << po;
	std::cout	<< std::endl << "Resultado em Pes: " 		 << pe;
	std::cout	<< std::endl << "Resultado em Jardas: "		 << ja;
	std::cout	<< std::endl << "Resultado em Milhas: "		 << mi;
	std::cout	<< std::endl << "Resultado em Centimetros: "	 << cm;
	std::cout	<< std::endl << "Resultado em Quilometros: " 	 << km;

	return 0;
}
