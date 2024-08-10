#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double s1, s2, s3, a, b, c;
    cin >> s1 >> s2 >> s3;
    if (s1 > s2 && s1 > s3)
    {
        a = s1;
        b = s2;
        c = s3;
    }
    else if (s2 > s1 && s2 > s3)
    {
        a = s2;
        b = s1;
        c = s3;
    }
    else if (s3 > s1 && s3 > s2)
    {
        a = s3;
        b = s2;
        c = s1;
    }
    else
    {
        a = s1;
        b = s2;
        c = s3;
    }

    if (a >= (b + c))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow(a, 2) > pow(b, 2) + pow(c, 2))
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow(a, 2) < pow(b, 2) + pow(c, 2))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c && a == c)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if (a == b && a != c || a == c && a != b || b == c && b != a)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}