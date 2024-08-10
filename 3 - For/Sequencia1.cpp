#include <iostream>
using namespace std;

int main()
{
    int a, b, num = 0;
    cin >> a >> b;
    for (int i = 0; i < b / a; i++)
    {
        for (int j = 1; j < a; j++)
        {
            num++;
            cout << num << " ";
        }
        num++;
        cout << num << endl;
    }

    return 0;
}
