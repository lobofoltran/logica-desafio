// Alunos: Gustavo Lobo e André Luiz.
#include <iostream>
#include <string>
using namespace std;

int main() {
	string escolha;
	float peso = 0;
	float pesoForm = 0; 	// Fórmula Peso.
	float pesoForm2 = 0;	// Fórmula Peso 2.
	
	cout	<< "Caso voce queira perder peso, digite emagrecer;" << endl << "Caso voce queira manter seu peso, digite manter;" << endl << "Caso voce queira ganhar peso, digite engordar." << endl;
	cin		>> escolha;
	
	cout	<< endl << "Digite seu peso em quilogramas (kg): ";
	cin		>> peso;
	
	if (escolha == "emagrecer") {
		pesoForm = peso * 20; 	// Fórmula 1: Multiplicando por 20;
		pesoForm2 = peso * 25;	// Fórmula 1: Multiplicando por 25;
		cout	<< endl << "Resultado: " << pesoForm << " e " << pesoForm2 << " calorias."; // Resultado.
	} else if (escolha == "manter") {
		pesoForm = peso * 25;
		pesoForm2 = peso * 30;
		cout	<< endl << "Resultado: " << pesoForm << " e " << pesoForm2 << " calorias.";
	} else if (escolha == "engordar") {
		pesoForm = peso * 30;
		pesoForm2 = peso * 35;
		cout	<< endl << "Resultado: " << pesoForm << " e " << pesoForm2 << " calorias.";
	}
	
	return 0;
}
