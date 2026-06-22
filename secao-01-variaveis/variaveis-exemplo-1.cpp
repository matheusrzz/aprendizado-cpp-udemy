#include <iostream>

/*
"iostream" é uma biblioteca
I - é Input - Entrada
O - é Output - Saída
*/


#include <locale.h> //Para usarmos acentos

//"namespace é organização de pastas
using namespace std;

int main(){
	
	// Para usarmos acentos
	setlocale(LC_ALL,"");
	
	//Variaveis são espaços na memória onde vamos guardar valores temporariamente
	int numerosInteiros = 3;
	double numerosComCasasDecimais = 9.99;
	char letra = 'a';
	const char* letras = "abcdefg";
	string textos = "Aluna: Rosiane";
	bool verdadeiroFalso = false;
	
	cout << numerosInteiros << "\n";
	cout << numerosComCasasDecimais << "\n";
	cout << letra << "\n";
	cout << letras << "\n";
	cout << textos << "\n";
	cout << verdadeiroFalso << "\n";
	

	
	
	
	
	//A função main diz que retornar um inteiro, então colocamos 0 como tipo retorno
	return 0;
	
}
