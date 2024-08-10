using namespace std;
#include <iostream>

int main()
{
    int num, sum;
    cin >> sum >> num;
    string action;
    for (int i = 0; i < num; i++)
    {
        cin >> action;
        if (action == "fechou")
        {
            sum++;
        }
        else if (action == "clicou")
        {
            sum--;
        }
    }
    cout << sum << endl;
    return 0;
}