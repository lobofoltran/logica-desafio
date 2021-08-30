#include<iostream>
using namespace std;

int main () {
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float r1 = 0;
	float r2 = 0;
	
	cout << "Digite o numero que sera divido: ";
	cin >> n1;
	
	cout << endl << "Digite um numero que o dividira: ";
	cin >> n2;
	
	cout << "Digite outro numero que o dividira: ";
	cin >> n3;
	
	r1 = n1 / n2;
	r2 = n1 / n3;
	
	cout << endl << "Resultado 1: " << r1;
	cout << endl << "Resultado 2: " << r2;
	
	// faltou criar se foi sucesso ou falha............ não foi bem entendido o desafio.
	
	return 0;
}
