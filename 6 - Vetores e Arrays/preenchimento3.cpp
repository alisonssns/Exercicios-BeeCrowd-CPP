using namespace std;
#include <iostream>

int main()
{
    double arr[100], num;
    cout.precision(4);
    cin >> num;
    for (int i = 0; i < 100; i++)
    {
        arr[i] = num;
        num /= 2;
    }

    for (int i = 0; i < 100; i++)
    {
        cout << fixed << "N[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}