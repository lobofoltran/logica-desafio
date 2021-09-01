#include<iostream>
using namespace std;

int main (){
	string escolha;
	float n1;
	float n2;
	float resultado;
	
	cout << "Digite (+) para adicao, (-) para subtracao, (/) para divisao e (*) para multiplicacao: ";
	cin >> escolha;
	
	if (escolha == "+") {
		cout << endl << "Calculadora de Adicao" << endl << endl << "Digite um numero: ";
		cin >> n1;
		cout << "Digite outro numero: ";
		cin >> n2;
		
		resultado = n1 + n2;
		
		cout << endl << "Resultado: " << resultado;
	} else if (escolha == "-") {
		cout << endl << "Calculadora de Subtracao" << endl << endl << "Digite um numero: ";
		cin >> n1;
		cout << "Digite outro numero: ";
		cin >> n2;
		
		resultado = n1 - n2;
		
		cout << endl << "Resultado: " << resultado;
	} else if (escolha == "/") {
		cout << endl << "Calculadora de Divisao" << endl << endl << "Digite um numero: ";
		cin >> n1;
		cout << "Digite outro numero: ";
		cin >> n2;
		
		resultado = n1 / n2;
		
		cout << endl << "Resultado: " << resultado;
		} else if (escolha == "*") {
		cout << endl << "Calculadora de Multiplicacao" << endl << endl << "Digite um numero: ";
		cin >> n1;
		cout << "Digite outro numero: ";
		cin >> n2;
		
		resultado = n1 * n2;
		
		cout << endl << "Resultado: " << resultado;
		} else {
		cout << endl << "Digite um dado valido! Apenas +, -, / ou *!";
	}
	
	return 0;
}
