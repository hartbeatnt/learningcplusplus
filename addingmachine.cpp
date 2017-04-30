#include <iostream>
using namespace std;

int main()
{
  double sum = 0.0;
  double n = 0.0;

  do {
    cout << "Enter a number or enter 0 to exit\n";
    cin >> n;
    sum += n;
  } while (n > 0.0);
  cout << "The sum is " << sum << endl;
  return 0;
}