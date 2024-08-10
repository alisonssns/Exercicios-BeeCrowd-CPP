#include <iostream>

using namespace std;

int main()
{
    int t, n, k, soma = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        if (n > k)
        {
            soma = (n / k) + (n % k);
        }
        else if (n < k)
        {
            soma = n;
        }
        else if (n == k)
        {
            soma = 1;
        }
        cout << soma << endl;
    }
    return 0;
}