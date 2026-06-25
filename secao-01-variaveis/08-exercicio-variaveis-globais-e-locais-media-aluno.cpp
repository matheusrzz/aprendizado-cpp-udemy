#include <iostream>
#include <locale.h>

using namespace std;

string nome;
float nota1VG, nota2VG, media;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota3VL, nota4VL;
	
	
	cout << "Digite seu nome: ";
	getline(cin, nome);
	
	cout << "Digite sua primeira nota: \n";
	cin >> nota1VG;
	
	cout << "Digite sua segunda nota: \n";
	cin >> nota2VG;
	
	cout << "Digite sua terceira nota: \n";
	cin >> nota3VL;
	
	cout << "Digite sua quarta nota: \n";
	cin >> nota4VL;
	
	media = (nota1VG + nota2VG + nota3VL + nota4VL) / 4;
	
		cout <<"--------------------------------------------" << endl;
	
	cout <<"" << nome << ", sua média das notas é : " << media << endl;
	

	
	system("pause");
	return 0;
}
