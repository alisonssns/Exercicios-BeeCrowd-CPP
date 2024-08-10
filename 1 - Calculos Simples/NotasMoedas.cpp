#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    double valor;
    int n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m05, m01;
    cin >> valor;

    n100 = valor / 100;
    valor -= n100 * 100;
    n50 = valor / 50;
    valor -= n50 * 50;
    n20 = valor / 20;
    valor -= n20 * 20;
    n10 = valor / 10;
    valor -= n10 * 10;
    n5 = valor / 5;
    valor -= n5 * 5;
    n2 = valor / 2;
    valor -= n2 * 2;
    m100 = valor;
    valor -= m100;
    valor += valor * 100;
    m50 = valor / 50;
    valor -= m50 * 50;
    m25 = valor / 25;
    valor -= m25 * 25;
    m10 = valor / 10;
    valor -= m10 * 10;
    m05 = valor / 5;
    valor -= m05 * 5;
    m01 = valor / 1;
    valor -= m01 * 1;

    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m100 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m05 << " moeda(s) de R$ 0.05" << endl;
    cout << m01 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}