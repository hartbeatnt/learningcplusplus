#include <iostream>
#include <cmath>

using namespace std;
void get_divisors(int n);

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  get_divisors(n);
}

void get_divisors(int n) {
  float root = sqrt(n);
  for(int i = 2; i < root; i++) {
    if (n % i == 0) {
      cout << i << ", ";
      get_divisors(n / i);
      return;
    }
  }
  cout << n;
}