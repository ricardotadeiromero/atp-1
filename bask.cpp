#include <iostream>
#include <cmath>

using namespace std;

main(){
	float a, b, c, delta, x1, x2;
	cout << "Informe os coeficientes a,b, e c de ax2+b2+c=0 ";
	cin >> a >> b >> c;
	delta = pow(b,2) - 4*a*c;
	if(delta>0){
		x1 = (-b+sqrt(delta))/2*a;
		x2 = (-b-sqrt(delta))/2*a;
		cout << "As raizes sao " << x1 << " e " << x2;
	} else {
		if(delta==0){
			x1 = -b/2*a;
			cout << "A raiz e " << x1;
		} else{
			cout << "Nao possui raizes";
		}
	}
	
}
