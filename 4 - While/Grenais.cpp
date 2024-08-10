#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int choice = 1, numG = 0, inter, gre, iV = 0, iG = 0, em = 0;
    while (choice == 1)
    {
        numG++;
        cin >> inter >> gre;
        if (inter > gre)
        {
            iV++;
        }
        else if (gre > inter)
        {
            iG++;
        }
        else
        {
            em++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> choice;
    }

    cout << numG << " grenais" << endl;
    cout << "Inter:" << iV << endl;
    cout << "Gremio:" << iG << endl;
    cout << "Empates:" << em << endl;

    if (iV > iG)
    {
        cout << "Inter venceu mais" << endl;
    }
    else
    {
        cout << "Gremio venceu mais" << endl;
    }
    return 0;
}