#include <iostream>
using namespace std;
int main()
{
    double med1, med2, med3, soma;
    cin >> med1;
    cin >> med2;
    cin >> med3;
    soma = ((med1 * 2) + (med2 * 3) + (med3 * 5)) / (2 + 3 + 5);

    cout.precision(1);
    cout << "MEDIA = " << fixed << soma << endl;
    return 0;
}