#include <iostream>

using namespace std;

int main()
{
    int c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;
    int copos[4] = {c1, c2, c3, c4};
    for (int i = 0; i < 4; i++)
    {
        if (copos[i] == 1)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}