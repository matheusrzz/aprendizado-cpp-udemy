#include <iostream>
#include <locale.h>

using namespace std;

#define nome cout << "Meu nome é Matheus Rafael, e estou estudando lógica de programação \n"
#define  pi 3.14159

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	nome;
	
	
	cout<<"O valor de pi é: " << pi << "\n\n";
	

	
	system("pause");
	return 0;
}
