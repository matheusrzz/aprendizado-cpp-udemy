#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1; 
    
    // Inicializa com 0
    numero1 = 0;
    
    cout <<"--------------Exemplo 1 --------------------------\n";
    cout << numero1 << "\n\n";
    
    // Somando 1 na variavel
    numero1 = numero1 +1;
    
    cout << numero1 << "\n\n";
    
    cout <<"--------------Exemplo 2--------------------------\n";
    // Somando 1 na variavel...mesma coisa que : numero1 = numero1 +1; porem resumido
    numero1++;
    cout << numero1 << "\n\n";
    // Decremento = Subrai 1 da variavel
    numero1--;
    cout << numero1 << "\n\n";
    
    cout <<"--------------Exemplo 3--------------------------\n";
    // Somando 1 na variavel...mesma coisa que : numero1 = numero1 +1; porem resumido
    numero1+= 1;
    cout << numero1 << "\n\n";
    // Decremento = Subrai 1 da variavel
    numero1-= 1;
    cout << numero1 << "\n\n";


    system("pause");
    return 0;
}
