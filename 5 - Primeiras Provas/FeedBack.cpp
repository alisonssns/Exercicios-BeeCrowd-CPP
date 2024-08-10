#include <iostream>

using namespace std;

int main()
{
    int n, k, f;
    string nomes[4] = {"Rolien", "Naej", "Elehcim", "Odranoel"};

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> k;

        for (int j = 0; j < k; j++)
        {
            cin >> f;
            cout << nomes[f - 1] << endl;
        }
    }

    return 0;
}