using namespace std;
#include <iostream>

int main()
{
    int num, x, y, sum = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> x >> y;
        sum = x + y;
        cout << sum << endl;
    }
    return 0;
}