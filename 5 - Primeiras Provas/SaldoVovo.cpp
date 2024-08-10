#include <iostream>

using namespace std;

int main()
{
    int n, in, mov, min;
    cin >> n >> in;
    min = in;
    for (int i = 0; i < n; i++)
    {
        cin >> mov;
        in += mov;
        if (in < min)
        {
            min = in;
        }
    }
    cout << min << endl;
    return 0;
}