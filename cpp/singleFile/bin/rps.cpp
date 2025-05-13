#include <iostream>
using namespace std;

typedef enum {
  ROCK,
  PAPER,
  SCISSORS
 } Choice;
typedef enum {
  WIN = 1,
  LOSE = -1,
  DRAW = 0
} Result;

Result judge(Choice player1, Choice player2) {
    if (player1 == player2) {
        return DRAW;
    }
    if ((player1 == ROCK && player2 == SCISSORS) ||
        (player1 == PAPER && player2 == ROCK) ||
        (player1 == SCISSORS && player2 == PAPER)) {
        return WIN;
    } else {
        return LOSE;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    Choice player1 = (Choice)a;
    Choice player2 = (Choice)b;

    Result result = judge(player1, player2);
    cout << result << endl;

    return 0;
}