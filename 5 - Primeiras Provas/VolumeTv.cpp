#include <iostream>
using namespace std;

int main()
{
    int in, n, m;
    cin >> in >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        in += (m);
        if (in > 100)
        {
            in = 100;
        }
        else if (in < 0)
        {
            in = 0;
        }
    }
    cout << in << endl;
    return 0;
}