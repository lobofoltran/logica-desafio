#include<iostream>

int main () {
	
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int resultado = 0;
	
	std::cout << "Digite o valor de ''a'': ";
	std::cin >> n1;
	
	std::cout << "Digite o valor de 'b': ";
	std::cin >> n2;
	
	std::cout << "Digite o valor de 'c': ";
	std::cin >> n3;
	
	//formula
	resultado = n1^2+n3;

	std::cout << resultado;
	
	return 0;
}
