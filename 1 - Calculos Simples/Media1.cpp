#include <iostream>
using namespace std;
int main()
{
    double med1, med2, soma;
    cin >> med1;
    cin >> med2;
    soma = ((med1 * 3.5) + (med2 * 7.5)) / (3.5 + 7.5);

    cout.precision(5);
    cout << "MEDIA = " << fixed << soma << endl;
    return 0;
}