#include <iostream>
#include <cstring>
using namespace std;

class plorg {
  char name[20];
  int CI;
public:
  plorg(const char *name = "Plorga", int CI = 50) {
    strcpy(this->name, name);
    CI = CI;
  }
  void setStat(const char *name, int CI) {
    strcpy(this->name, name);
    CI = CI;
  }
  void showStat() const {
    cout << "Name: " << this->name << endl << "CI: " << this->CI << endl;
  }

};

int main() {
  plorg p1("Jacky", 100);
  plorg p2;
  p1.showStat();
  p2.showStat();
  p2.setStat("GodDAMN", 99999);
  p2.showStat();
  return 0;
}