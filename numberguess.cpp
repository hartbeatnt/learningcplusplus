#include <iostream>

using namespace std;

int main()
{
  int max, guess;
  int offset = 0;
  int min = 0;
  cout << "I wiLl guess your number \n";
  cout << "Give me a max: ";
  cin >> max;
  while (offset != 3) {
    if (offset == 1) {
      min = guess;
    } else if (offset == 2) {
      max = guess;
    } else if (offset) {
      cout << "come on bruh. That's invalid\n";
    }
    guess = (max + min) / 2;
    cout << "ok. is it " << guess << "?\n";
    cout << "press 1 if I am too low,\n";
    cout << "2 if I am too high,\n";
    cout << "or 3 if I am correct.\n";
    cin >> offset;
  }
  cout << "gg.";
  return 0;
}