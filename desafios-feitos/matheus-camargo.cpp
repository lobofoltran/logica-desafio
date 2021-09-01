// Alunos: Gustavo Lobo e André Luiz.
#include<iostream>
using namespace std;

int main () {
	string nome2;
	int pretensao = 0;
	
	cout	<< "Insira o seu nome: ";
	getline(cin, nome2); // Função getline utilizada para pegar o nome completo.
	
	cout	<< "Insira a sua pretensao salarial: ";
	cin	>> pretensao;
	
	if (pretensao > 0 && pretensao < 1300) {
		cout	<< endl << "Nome do candidato: " << nome2 << endl;
		cout	<< "O candidato se encaixa em um cargo de auxiliar de producao.";
	} else if (pretensao >= 1300 && pretensao < 2500) {		
		cout	<< endl << "Nome do candidato: " << nome2 << endl;
		cout	<< "O candidato se encaixa em um cargo de lideranca.";
	} else if (pretensao >= 2500) {
		cout	<< endl << "Nome do candidato: " << nome2 << endl;
		cout	<< "O candidato nao se encaixa no que a empresa procura.";
	} else {
		cout	<< endl << "Digite um dado valido!";
	}
	
	return 0;
}
