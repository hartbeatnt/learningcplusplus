#include <iostream>
using namespace std;

int main()
{
  int total;
  int subtractor;

  cout << "Welcome to subtraction game" << endl;
  cout << "Goal is to reduce total to 0" << endl;
  cout << "or less by subtracting 1 or 2\n" << endl;
  cout << "What number shall we start with?" << endl;

  cin >> total;
  while (total < 1) {
    cout << "must start with positive integer\n";
    cout << "What number shall we start with?\n";
    cin >> total;
  }
  cout << "We shall start with " << total << endl;

  while (true) {
    if (total % 3 == 2) {
      cout << "Computer subtracts 2." << endl;
      total -= 2;
      cout << "Total is now " << total << endl;
    } else {
      cout << "Computer subtracts 1." << endl;
      total -= 1;
      cout << "Total is now " << total << endl;
    }
    if (total <= 0) {
      cout << "Computer wins." << endl;
      break;
    }
    cout << "Do you subtract 1 or 2?" << endl;
    cin >> subtractor;
    while (subtractor != 1 && subtractor != 2) {
      cout << "Invalid move. Try again" << endl;
      cin >> subtractor;
    }
    total -= subtractor;
    cout << "You subtract " << subtractor << endl;
    cout << "Total is now " << total << endl;
    if (total <= 0) {
      cout << "You win!" << endl;
      break;
    }
  }
  return 0;
}
