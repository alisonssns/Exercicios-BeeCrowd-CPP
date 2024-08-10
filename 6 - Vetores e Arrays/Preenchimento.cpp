#include <iostream>
using namespace std;
int main()
{
    int arr[10], num;
    cin >> num;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num;
        num *= 2;
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}