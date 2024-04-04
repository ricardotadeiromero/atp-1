#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    int exp = 2;
    int fat = 3;
    double fatAux = 1;
    float sum = 0;
    int mult = -1;
    cout << "Digite o valor do X: " << endl;
    cin >> x;
    sum += x;
    cout << sum << " ";
    for (int i = 0; i <= 20; i++)
    {
        for (int j = fat; j > 0; j--)
        {
            fatAux *= j;
        }
        cout << fatAux << " ";
        sum = mult * (pow(x, exp) / fatAux);
        exp += 2;
        fat += 2;
        mult *= -1;
        fatAux = 1;
    }
    cout << sum << " ";
}