#include <iostream>
using namespace std;
int main()
{
    double n = 3.14159, raio, soma;
    cin >> raio;
    soma = n * (raio * raio);

    cout.precision(4);
    cout << "A=" << fixed << soma << endl;
    return 0;
}