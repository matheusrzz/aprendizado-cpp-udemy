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
	
	setlocale(LC_ALL,"");
	
	
	// "cout" para emitir na tela
	// "/n" para quebrar linha
	// "endl" para pular linha
	
	cout << "Olá, mundo!" << endl;
	
	cout << "Olá, mundo! \n Sou o aluno Matheus" << endl;
	
	
	
	//A função main diz que retornar um inteiro, então colocamos 0 como tipo retorno
	return 0;
	
}
