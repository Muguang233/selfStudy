#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  std::string input;
  std::getline(std::cin, input);
  std::istringstream iss(input);
  std::string token;
  int count = 0;
  while (iss >> token) {
    count++;
  }
  cout << count << endl;
  return 0;
}