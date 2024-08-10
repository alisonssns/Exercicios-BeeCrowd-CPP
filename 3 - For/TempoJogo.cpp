#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    int in, end, result;
    cin >> in >> end;
    if (in > end)
    {
        end += 24;
    }
    else if (in == end)
    {
        in += 24;
    }
    if (in > end)
    {
        result = in - end;
    }
    else
    {
        result = end - in;
    }

    cout << "O JOGO DUROU " << result << " HORA(S)" << endl;
    return 0;
}