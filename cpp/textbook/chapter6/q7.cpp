#include <iostream>
using namespace std;

bool isVowel(char ch) {
  switch (ch)
  {
  case 'a':
    return true;
    break;
  case 'e':
    return true;
    break;
  case 'i':
    return true;
    break;
  case 'o':
    return true;
    break;
  case 'u':
    return true;
    break;
  
  default:
    return false;
    break;
  }
}

int main() {
  string word;
  int other = 0;
  int constant = 0;
  int vowel = 0;
  while(cin >> word) {
    if(word == "q" || word == "quit") break;
    if(!isalpha(word[0])) {
      other++;
    } else if(isVowel(tolower(word[0]))) {
      vowel++;
    } else {
      constant++;
    }
  }
  cout << vowel << " words beginning with vowels\n";
  cout << constant << " words beginning with constants\n";
  cout << other << " others\n";
}