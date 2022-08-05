#include <iostream>
#include <locale.h>
#include <vector>
#include <windows.h>

using namespace std;

vector<int> aluno;
vector<float> parcial;
vector<float> exame;
vector<char> status;


int main () {
	
	setlocale (LC_ALL,"");
	
	
	while (1) {
		{
		int valor;
		cout << "\n\nDigite o RA do aluno: ";
		cin >> valor;
		aluno.push_back(valor);
		}
		
		{
		float valor;
		cout << "\nDigite a nota parcial: ";
		cin >> valor;
		parcial.push_back(valor);
		}
		
		{
		float valor;
		cout << "\nDigite a nota do exame: ";
		cin >> valor;
		exame.push_back(valor);
		}
	
		char valor;
		cout << "\n\nContinuar para o próximo aluno ('S' sim ou 'N' não): ";
		cin >> valor;
		if ( (valor == 'N') || (valor == 'n') )
			break;
	}
			
	cout<< "\n\nResultados:\n\n";
		
	for (int i = 0; i < aluno.size(); i++) {
		
		cout<< "Aluno: " << aluno[i]
			<< "    Nota parcial: " << parcial[i]
			<< "    Nota do exame: " << exame[i]
			<< "    Média: " << parcial[i] * 0.4 + exame[i] * 0.6;
		
		if ( parcial[i] * 0.40 + exame[i] * 0.60 < 5 )	
			cout << "    Situação: REPROVADO\n\n";
		else
			cout << "    Situação: APROVADO\n\n";
	
	
	}
			
	
	system ("pause");
	
	return 0;
}