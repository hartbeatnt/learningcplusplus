#include <iostream>

using namespace std;

double avg(double num1, double num2);

int main()
{
  double num1, num2;
  cout << "enter the 1st number: ";
  cin >> num1;
  cout << "enter the 2nd number: ";
  cin >> num2;

  cout << "average: " << avg(num1,num2);
  return 0;
}

double avg(double num1, double num2) {
  return (num1 + num2) / 2;
}