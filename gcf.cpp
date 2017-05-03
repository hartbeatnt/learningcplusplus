#include <iostream>
#include <cmath>

using namespace std;

int gcf(int a, int b);

int main()
{
  int num1, num2;
  cout << "Enter 1st number: ";
  cin >> num1;
  cout << "Enter 2nd number: ";
  cin >> num2;
  cout << "Greatest common factor:\n";
  cout << gcf(num1, num2);
}

int gcf(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcf(b, a % b);
}
