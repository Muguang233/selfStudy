#include <iostream>
using namespace std;

struct box {
  string name;
  int volume;
};
void print(box &boxref) {

}

int main() {
  box newbox;
  newbox.name = "Name";
  print(newbox);
  cout << "Box vol: " << newbox.volume << endl;
  return 0;
}