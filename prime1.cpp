#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n = 0;
  int i = 2;
  double root;
  bool is_prime = true;

  cout << "Enter a number and\npress ENTER: ";
  cin >> n;

  root = sqrt(n);
  while (i <= root) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
    ++i;
  }

  if (is_prime) {
    cout << "Number is prime." << endl;
  } else {
    cout << "Number is not prime." << endl;
  }
  return 0;
}