#include <iostream>

using namespace std;

main(){
	float a,b,c;
	cout << "Informe os lados do triângulo: ";
	cin >> a >> b >> c;
	if(a==b||b==c||c==a){
		if(a==b&&b==c){
			cout << "Equilatero";
		} else {
			cout << "Isoceles";
		}
	} else {
		cout << "Escaleno";
	}
}
