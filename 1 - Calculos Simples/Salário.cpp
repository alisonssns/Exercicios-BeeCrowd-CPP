#include <iostream>
using namespace std;
int main()
{
    int num, hour;
    double mHour, total;
    cin >> num;
    cin >> hour;
    cin >> mHour;

    total = hour * mHour;
    cout.precision(2);
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << fixed << total << endl;
    return 0;
}