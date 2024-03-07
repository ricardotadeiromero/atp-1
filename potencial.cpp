#include <iostream>

using namespace std;

main(){
	float massa, altura, energia; 
	cout << "Informa o valor da massa (em kg): ";
	cin >> massa;
	cout << "Informe o valor da altura (em m): ";
	cin >> altura;
	energia = massa * altura * 9.8;
	cout << endl << "A energia potencial vale " << energia;
	
}
