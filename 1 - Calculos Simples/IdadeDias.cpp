#include <iostream>
using namespace std;
int main()
{
    int times, anos, meses, dias;
    cin >> times;
    anos = times / 365;
    meses = (times - anos * 365) / 30;
    dias = (times - anos * 365 - meses * 30);

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
    return 0;
}