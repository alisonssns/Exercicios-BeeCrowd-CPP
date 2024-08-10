#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int par = 0, impar = 0, posi = 0, neg = 0, a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int arr[] = {a, b, c, d, e};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            par++;
        }
        else if (arr[i] % 2 != 0)
        {
            impar++;
        }
        if (arr[i] > 0)
        {
            posi++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << posi << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}