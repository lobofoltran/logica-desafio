/* Faça uma calculadora completa em C++ 
onde o usuário deve escolher uma opção de 
equação (+, -, /, e *) inserir dois números. 
O resultado da equação devera sempre ser positivo. */

#include <iostream>
#include <cstring>
#include <clocale>

int main () {
	std::string escolha;
	float numero1;
	float numero2;
	float resultado;
	setlocale(LC_ALL,"Portuguese");
	
	std::cout << "Digite (+) para adição, (-) para subtração, (/) para divisão e (*) para multiplicação: ";
	std::cin >> escolha;
	
	if (escolha == "+") {
		std::cout << std::endl << "--- * Calculadora de Adição * ---";
		
		// Recebendo os dados
		std::cout << std::endl << "Digite um numero: ";
		std::cin >> numero1;
		std::cout << "Digite outro numero: ";
		std::cin >> numero2;
		
		// Fórmula
		resultado = numero1 + numero2;
		
		// Resultado
		std::cout << std::endl << "Resultado: " << resultado;
		
	} else if (escolha == "-") {
		std::cout << std::endl << "--- * Calculadora de Subtração * ---";
		std::cout << std::endl << "Digite um numero: ";
		std::cin >> numero1;
		std::cout << "Digite outro numero: ";
		std::cin >> numero2;
		resultado = numero1 - numero2;
		std::cout << std::endl << "Resultado: " << resultado;
	} else if (escolha == "/") {
		std::cout << std::endl << "--- * Calculadora de Divisão * ---";
		std::cout << std::endl << "Digite um numero: ";
		std::cin >> numero1;
		std::cout << "Digite outro numero: ";
		std::cin >> numero2;
		resultado = numero1 / numero2;
		std::cout << std::endl << "Resultado: " << resultado;
		} else if (escolha == "*") {
		std::cout << std::endl << "--- * Calculadora de Multiplicação * ---";
		std::cout << std::endl << "Digite um numero: ";
		std::cin >> numero1;
		std::cout << "Digite outro numero: ";
		std::cin >> numero2;
		resultado = numero1 * numero2;
		std::cout << std::endl << "Resultado: " << resultado;
		} else {
		std::cout << std::endl << "Digite um dado válido! Apenas (+), (-), (/) ou (*)!";
	}
	
	return 0;
}
