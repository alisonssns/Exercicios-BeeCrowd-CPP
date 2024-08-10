#include <iostream>

using namespace std;

int main()
{
    int b, l, c, sum = 0;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> l >> c;
        if (l > c)
        {
            sum += c;
        }
    }
    cout << sum << endl;
    return 0;
}