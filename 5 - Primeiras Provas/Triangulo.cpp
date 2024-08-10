using namespace std;
#include <iostream>

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        sum++;
    }
    cout << sum << endl;
    return 0;
}