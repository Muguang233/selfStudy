#include <iostream>
using namespace std;

int main() {
  std::string input;
  std::cin >> input;
  for(size_t i = 0; i < input.size(); i++) {
    if(isalpha(input[i])) cout << input[i];
  }
  return 0;
}