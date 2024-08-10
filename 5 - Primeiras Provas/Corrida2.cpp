#include <iostream>
using namespace std;

int main()
{
    float n1, d1, v1, n2, d2, v2;
    cin >> n1 >> d1 >> v1 >> n2 >> d2 >> v2;
    if (d1 / v1 < d2 / v2)
    {
        cout << n1 << endl;
    }
    else
    {
        cout << n2 << endl;
    }
    return 0;
}