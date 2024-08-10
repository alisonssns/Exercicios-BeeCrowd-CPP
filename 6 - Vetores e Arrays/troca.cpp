using namespace std;
#include <iostream>

int main()
{
    int arr[20], num;
    for (int i = 19; i >= 0; i--)
    {
        cin >> num;
        arr[i] = num;
    }
    for (int i = 0; i <= 19; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}