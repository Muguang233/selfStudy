#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream file_input;
  file_input.open("input.txt");
  string line;
  string buffer;
  while(getline(file_input, line)) {
    buffer += line + '\n';
  }
  int count = 0;
  for(int i = 0; buffer[i] != '\0'; i++) {
    if(buffer[i] == '\n') continue;
    count++;
  }
  cout << "the length is: " << count << endl;
  cout << buffer;
  return 0;
}