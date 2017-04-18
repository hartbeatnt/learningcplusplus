#include <iostream>
using namespace std;

int main()
{
  double temp;
  cout << "Input a Celsius temp\nand press ENTER: ";
  cin >> temp;
  temp = (temp * 1.8) + 32.0;
  cout << "Fahrenheit temp is: " << temp;
  return 0;
}