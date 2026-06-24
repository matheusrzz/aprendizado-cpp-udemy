#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float metros, centimetros;
	
	cout << "Digite quantos METROS deseja converter: \n";
	cin >> metros;
	
	cout << "\n";
	
	centimetros = metros * 100;
	
	cout << metros << " metros são: " << centimetros << " centimetros \n\n";
	

		
	
	system("pause");
	return 0;
}
