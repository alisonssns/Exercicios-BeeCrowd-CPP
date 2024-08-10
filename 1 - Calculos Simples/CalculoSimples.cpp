#include <iostream>
using namespace std;
int main()
{
  int cod1, cod2, num1, num2;
  double val1, val2, soma;
  cin >> cod1;
  cin >> num1;
  cin >> val1;
  cin >> cod2;
  cin >> num2;
  cin >> val2;

  soma = (val1 * num1) + (val2 * num2);
  cout.precision(2);
  cout << "VALOR A PAGAR: R$ " << fixed << soma << endl;

  return 0;
}