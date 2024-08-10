#include <iostream>
using namespace std;
int main()
{
    string nome;
    double sal, vend, total;
    cin >> nome;
    cin >> sal;
    cin >> vend;

    total = sal + ((vend * 15) / 100);

    cout.precision(2);
    cout << "TOTAL = R$ " << fixed << total << endl;
    return 0;
}