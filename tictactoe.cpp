#include <iostream>
#include <string>

using namespace std;

class Board {
  struct Row {
    string a = "   ";
    string b = "   ";
    string c = "   ";
  };
  public:
    void playGame();
    bool askToPlayAgain();
  
  private:
    void print();
    Row rows[3];
};

Board board;

int main() {
  // TODO introduce game
  bool bPlayAgain = false;
  do {
    board.playGame();
    bPlayAgain = board.askToPlayAgain();
  } while (bPlayAgain);
  // TODO summarize game
}

void Board::playGame() {
  print();
}

bool Board::askToPlayAgain() {
  // TODO prompt yes or no
  return false;
}

void Board::print() {
  for (int i = 0; i < 3; i++) {
    cout << rows[i].a+"|"+rows[i].b+"|"+rows[i].c;
    i < 2 && cout <<"\n-----------\n";
  }
  cout << "\n\n";
  return;
}