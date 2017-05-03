#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int pick_random(int num1, int num2);

int main()
{
  int trials, target;
  int results[10];
  for (int i = 0; i < 10; i++) {
    results[i] = 0;
  }
  srand(time(NULL));
  cout << results << endl;
  cout << "how many trials shall we run?\n";
  cin >> trials;
  cout << "ok. here's "<<trials<<" trials:\n";
  for (int i = 0; i < trials; i++) {
    results[pick_random(0,9)]++;
  }
  for (int i = 0; i < 9; i++) {
    cout << i << ": " << results[i] << endl;
  }
}

int pick_random(int num1, int num2) {
  return (rand() % (num2-num1)) + num1;
}