#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    double n1, n2, n3, n4, media, nE, mF;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);

    cout.precision(1);

    if (media >= 7.0)
    {
        cout << "Media: " << fixed << media << endl;
        cout << "Aluno aprovado." << endl;
    }
    else if (media >= 5.0 && media < 7.0)
    {
        cout << "Media: " << fixed << media << endl;
        cout << "Aluno em exame." << endl;
        cin >> nE;
        cout << "Nota do exame: " << nE << endl;
        mF = (media + nE) / 2;

        if (mF >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << fixed << mF << endl;
    }
    else if (media < 5.0)
    {
        cout << "Media: " << fixed << media << endl;
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}