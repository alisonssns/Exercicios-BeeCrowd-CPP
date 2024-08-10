#include <iostream>
using namespace std;
int main()
{
  double vol, raio;
  cin >> raio;

  vol = (4.00 / 3.00) * (3.14159) * (raio * raio * raio);

  cout.precision(3);
  cout << "VOLUME = " << fixed << vol << endl;

  return 0;
}