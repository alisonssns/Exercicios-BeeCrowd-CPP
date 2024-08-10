#include <iostream>
using namespace std;
int main()
{
    float arr[100], num;
    cout.precision(1);
    for (int i = 0; i < 100; i++)
    {
        cin >> num;
        arr[i] = num;
    }
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] <= 10)
        {
            cout << fixed << "A[" << i << "] = " << arr[i] << endl;
        }
    }

    return 0;
}