using namespace std;
#include <iostream>

int main()
{
    int arr[1000], num, j = 0;
    cin >> num;
    for (int i = 0; i < 1000; i++)
    {
        arr[i] = j;
        j++;
        if (j >= num)
        {
            j = 0;
        }
    }

    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}