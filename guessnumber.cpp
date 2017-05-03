#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int max;
  int guess;
  int target;
  int count = 0;
  bool guessed = false;
  srand(time(NULL));

  cout << "Let's play a guessing game\n";
  cout << "What should the max be?  ";
  cin >> max;
  target = rand() % max + 1;

  cout << "Great. Guess a number between\n";
  cout << "1 and " << max << ". ";

  do {
    cin >> guess;
    count++;
    if (guess < target) {
      cout << "Too low! Guess again.\n";
    } else if (guess > target) {
      cout << "Too high! Guess again.\n";
    } else {
      cout << "You guessed correct!\n";
      cout << "It took you " << count << " tries.";
      guessed = true;
    }
  } while (!guessed);
  return count;
}