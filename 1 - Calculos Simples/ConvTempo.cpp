#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int times, hour = 0, min = 0, sec = 0;
    cin >> times;

    hour = times / 3600;
    min = (times - hour * 3600) / 60;
    sec = times % 60;

    cout << hour << ":" << min << ":" << sec << endl;
    return 0;
}