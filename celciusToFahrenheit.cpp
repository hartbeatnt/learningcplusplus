#include <iostream>
using namespace std;

int main()
{
  double temp;
  cout << "Input a Celsius temp\nand press ENTER: ";
  cin >> temp;
  cout << "Fahrenheit temp is: " << temp * 1.8 + 32.0;
  return 0;
}