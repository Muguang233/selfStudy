#include <iostream>
#include <cstring>
using namespace std;

struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

box newBox(char[], float, float, float);
void print(box);
void setVol(box *Box);
int main() {
  box Box = newBox("name", 10.2, 5.3, 7.1);
  print(Box);
  setVol(&Box);
  return 0;
}

box newBox(char maker[], float height, float width, float length) {
  box nB;
  strcpy(nB.maker, maker);
  nB.height = height;
  nB.width = width;
  nB.length = length;
  return nB;
}

void print(box Box) {
  cout << Box.maker;
  cout << Box.height;
  cout << Box.width;
  cout << Box.length;
}

void setVol(box *Box) {
  Box->volume = Box->height * Box->width * Box->length;
}