#include <iostream>
using namespace std;
int main()
{
    double soma, A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    cout.precision(3);
    soma = (A * C) / 2;
    cout << "TRIANGULO: " << fixed << soma << endl;

    soma = 3.14159 * (C * C);
    cout << "CIRCULO: " << fixed << soma << endl;

    soma = ((A + B) * C) / 2;
    cout << "TRAPEZIO: " << fixed << soma << endl;

    soma = (B * B);
    cout << "QUADRADO: " << fixed << soma << endl;

    soma = (A * B);
    cout << "RETANGULO: " << fixed << soma << endl;

    return 0;
}