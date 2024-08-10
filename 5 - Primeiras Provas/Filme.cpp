using namespace std;
#include <iostream>

int main()
{
    float val1, val2, percent;
    cout.precision(2);
    cin >> val1 >> val2;
    percent = ((val2 - val1) / val1) * 100;
    cout << fixed << percent << "%" << endl;
    return 0;
}