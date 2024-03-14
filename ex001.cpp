#include <iostream>

using namespace std;

main(){
	string nome;
	char sexo;
	int idade;
	cout << "Informe o nome: ";
	cin >> nome;
	cout << "Informe o sexo: ";
	cin >> sexo;
	cout << "Informe a idade: ";
	cin >> idade;
	if(sexo=='m'){
		if(idade>=65) cout << nome << " aposentado!";
		else cout << "Ainda nao " << nome << " jovem!";
	}
	if(sexo=='f'){
		if(idade>=63) cout << nome << " aposentada!";
		else cout << "Ainda nao " << nome << " jovem!";
	}
}
