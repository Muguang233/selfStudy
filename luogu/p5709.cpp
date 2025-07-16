#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int m,t,s;
  cin >> m >> t >> s;
  if(t == 0) {
    cout << 0 << endl;
  } else {
    int result = m - (s/t);
    if (s%t == 0) {
      cout << max(0,result) << endl;
    } else {
      cout << max(0,result-1)<<endl;
    }
  }
  
  return 0;
}