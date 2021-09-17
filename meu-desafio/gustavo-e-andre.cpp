#include<iostream>
#include <clocale>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float m = 0;
	float po = 0;
	float pe = 0;
	float ja = 0;
	float mi = 0;
	float cm = 0;
	float km = 0;
		
	std::cout 	<< "Digite o numero de Metros (m): ";
	std::cin	>> m;
	
	//formula
	po = m * 39.37;
	pe = m * 3.281;
	ja = m * 1.094;
	mi = m / 1609;
	cm = m * 100;
	km = m / 1000;
	
	std::cout	<< "\nResultado em Polegadas: " << po;
	std::cout	<< "\nResultado em Pes: " << pe;
	std::cout	<< "\nResultado em Jardas: " << ja;
	std::cout	<< "\nResultado em Milhas: " << mi;
	std::cout	<< "\nResultado em Centimetros: " << cm;
	std::cout	<< "\nResultado em Quilometros: " << km;

return 0;
}
