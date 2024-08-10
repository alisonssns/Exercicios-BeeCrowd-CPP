#include <iostream>
using namespace std;

int main()
{
    int n;
    float p, g, sum, min = 100000;
    cout.precision(2);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> g;
        g = 1000 / g;
        sum = p * g;
        if (sum < min)
        {
            min = sum;
        }
    }
    cout << fixed << min << endl;
    return 0;
}