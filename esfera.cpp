#include <iostream>

using namespace std;

main(){
	float r,v,a;
	cout << "Informe o raio: ";
	cin >> r;
	v = (4*3.14*r*r*r)/3;
	a = 4*3.14*r*r;
	cout << "O volume e " << v << endl	;
	cout << "A área e " << a;
}
