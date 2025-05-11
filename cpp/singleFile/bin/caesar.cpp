#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;

void count_alpha(std::string input, int alpha[]) {
  for(size_t i = 0; i < input.size(); i++) {
    if(!isalpha(input[i])) continue;
    alpha[toupper(input[i]) - 65]++;
  }
}
void init_alpha(int alpha[]) {
  for (size_t i = 0; i < 26; i++)
  {
    alpha[i] = 0;
  }
}

void print_count(int alpha[]) {
  for(size_t i = 0; i < 26; i++){
    char c = i + 65;
    cout << c << ": " << alpha[i] << endl;
  }
}
int find_key(int alpha[]) {
  int max = 0;
  int index;
  for(size_t i = 0; i < 26; i++){
    if(alpha[i] > max) {
      max = alpha[i];
      index = i;
    }
  }
  int key = 'E' - (index + 65);
  return key;
}


int main() {
  int alpha[26];
  init_alpha(alpha);
  std::string input;
  std::stringstream buffer;
  while(std::getline(std::cin, input)) {
    if(input == "START" || input == "END") continue;
    if(input == "ENDOFINPUT") break;
    count_alpha(input, alpha);
    buffer << input << '\n';
  }
  //print_count(alpha);
  int key = find_key(alpha);
  std::string result = buffer.str();
  for(size_t i = 0; i < result.size(); i++) {
    if(isalpha(result[i])) {
      char c = toupper(result[i]) + key;
      if(c < 'A') c = 'Z' - ('A' - c) + 1;
      cout << c;
      continue;
    }
    cout << result[i];
  }
  return 0;
}