#include <iostream>
using namespace std;

int main() {
  int x;
  int hd = 0;
  int ps = 0;
  int fl = 0;
  while(true) {
    cin >> x;
    if(x == 0) break;
    if(x < 60) fl++;
    if(x >=60 && x < 85) ps++;
    if(x > 85) hd++;
  }
  printf(">=85:%d\n60-84:%d\n<60:%d\n", hd, ps, fl);
  return 0;
}