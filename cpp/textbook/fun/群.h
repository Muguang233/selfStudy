#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <format>
#define 不是 false
using namespace std;
class 群友 {
  private:
    string 名字;
    bool 是大佬;
  public:
    群友(): 名字("大佬"), 是大佬(true) {}
    群友(const string &_name): 名字(_name), 是大佬(true){}
    群友(const string &_name, const bool _orz) : 名字(_name), 是大佬(_orz) {}
    friend std::ostream& operator<<(std::ostream& os, const 群友&  群友) {
      os << 群友.名字;
      return os;
    }
    
};

群友 operator%(const vector<群友>& arr, const 群友& 大佬) {
  return 群友("我", false);
}

vector<群友> 新群(const int& num){
      vector<群友> arr;
      for(int i = 0; i < num ; i++) {
        stringstream ss;
        ss << "群友" << i << "号";
        string str = ss.str();
        arr.push_back(群友(str));
      }
      return arr;
    }