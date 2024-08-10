#include <iostream>
using namespace std;
int main()
{
    int pp[5] = {300, 1500, 600, 1000, 150};

    int qt, soma = 225;

    for (int i = 0; i < 5; i++)
    {
        cin >> qt;
        soma += pp[i] * qt;
    }

    cout << soma << endl;
    return 0;
}