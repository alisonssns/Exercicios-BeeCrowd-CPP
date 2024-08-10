using namespace std;
#include <iostream>

int main()
{
    int num, A1, A2, B1, B2, C1, C2, D1, D2, x, y;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2 >> D1 >> D2 >> x >> y;
        if (x >= A1 && x >= D1 && x <= B1 && x <= C1 && y >= A2 && y >= B2 && y <= C2 && y <= D2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}