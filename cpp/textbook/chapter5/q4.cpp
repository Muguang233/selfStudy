#include <iostream>

int main(int argc, char const *argv[])
{
  int init_Daphne = 100;
  int init_Cleo = 100;
  double rate_Daphne = 10;
  double rate_Cleo = 1.05;
  int count = 0;
  while (init_Daphne >= init_Cleo) {
    init_Daphne += rate_Daphne;
    init_Cleo *= rate_Cleo;
    count++;
  }
  std::cout << "After " << count << " months, Cleo's investment will be worth more than Daphne's investment." << std::endl;
  return 0;
}
