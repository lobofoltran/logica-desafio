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
		std::cout << std::endl << "--- * Calculadora de Adição * ---" << std::endl;
		
		// Recebendo os dados
		std::cout << std::endl << "Digite um número: ";
		std::cin >> numero1;
		if (numero1 != 0) {
		} else {
		std::cout << std::endl << "Por favor digite um número válido! (Ou maior que 0)";
		return 0;
		}
		std::cout << "Digite outro número: ";
		std::cin >> numero2;
		if (numero2 != 0) {
		} else {
		std::cout << std::endl << "Por favor digite um número válido! (Ou maior que 0)";
		return 0;
		}
		
		// Fórmula
		resultado = numero1 + numero2;
		
	} else if (escolha == "-") {
		std::cout << std::endl << "--- * Calculadora de Subtração * ---" << std::endl;
		std::cout << std::endl << "Digite um número: ";
		std::cin >> numero1;
		if (numero1 != 0) {
		} else {
		std::cout << std::endl << "Por favor digite um número válido! (Ou maior que 0)";
		return 0;
		}
		std::cout << "Digite outro número: ";
		std::cin >> numero2;
		if (numero2 != 0) {
		} else {
		std::cout << std::endl << "Por favor digite um número válido! (Ou maior que 0)";
		return 0;
		}
		resultado = numero1 - numero2;
	} else if (escolha == "/") {
		std::cout << std::endl << "--- * Calculadora de Divisão * ---" << std::endl;
		std::cout << std::endl << "Digite um número: ";
		std::cin >> numero1;
		if (numero1 != 0) {
		} else {
		std::cout << std::endl << "Por favor digite um número válido! (Ou maior que 0)";
		return 0;
		}
		std::cout << "Digite outro número: ";
		std::cin >> numero2;
		if (numero2 != 0) {
		} else {
		std::cout << std::endl << "Por favor digite um número válido! (Ou maior que 0)";
		return 0;
		}
		resultado = numero1 / numero2;
		} else if (escolha == "*") {
		std::cout << std::endl << "--- * Calculadora de Multiplicação * ---" << std::endl;
		std::cout << std::endl << "Digite um número: ";
		std::cin >> numero1;
		if (numero1 != 0) {
		} else {
		std::cout << std::endl << "Por favor digite um número válido! (Ou maior que 0)";
		return 0;
		}
		std::cout << "Digite outro número: ";
		std::cin >> numero2;
		if (numero2 != 0) {
		} else {
		std::cout << std::endl << "Por favor digite um número válido! (Ou maior que 0)";
		return 0;
		}
		resultado = numero1 * numero2;
		} else {
		std::cout << std::endl << "Digite um dado válido! Apenas (+), (-), (/) ou (*)!";
		return 0;
	}
	
	if (resultado < 0) {
		std::cout	<< std::endl << "Resultado negativo convertido para positivo: " << resultado * (-1);
	} else {
		std::cout	<< std::endl << "Resultado: " << resultado;
	}
	
	return 0;
}
