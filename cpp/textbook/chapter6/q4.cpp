#include <iostream>
using namespace std;


struct bop {
  string fullname;
  string title;
  string bopname;
  int preference;
};


void intro() {
  cout << "Benevolent Order of Programmers Report" << endl;
  cout << "a. display by name       b. display by title\n";
  cout << "c. display by bopname    d. display by preference\n";
  cout << "q. quit\n";
}

void display(bop item) {
  switch (item.preference)
  {
  case 0:
    cout << item.fullname << endl;
    break;
  case 1:
    cout << item.title << endl;
    break;
  case 2:
    cout << item.bopname << endl;
    break;
  
  default:
    break;
  }
}
bop NewBOP(string name, string title, string BOP, int pre) {
  bop n;
  n.fullname = name;
  n.title = title;
  n.bopname = BOP;
  n.preference = pre;
  return n;
}

int main() {
  bop arr[3];
  arr[0] = NewBOP("Wimp Macho", "The king", "first bop", 0);
  arr[1] = NewBOP("Raki Rhodes", "The IDK", "second BOP", 1);
  arr[2] = NewBOP("Random guy", "random title", "3rd", 2);
  bool loop = true;
  char cmd;
  intro();
  while(loop) {
    cout << "Enter your choice: ";
    cin >> cmd;
    switch (cmd)
    {
    case 'q':
      loop = false;
      cout << "quiting program\n";
      break;
    case 'a':
      for(int i = 0; i < 3; i++) cout << arr[i].fullname << endl;
      break;
    case 'b':
      for(int i = 0; i < 3; i++) cout << arr[i].title << endl;
      break;
    case 'c':
      for(int i = 0; i < 3; i++) cout << arr[i].bopname << endl;
      break;
    case 'd':
      for(int i = 0; i < 3; i++) display(arr[i]);
      break;
    default:
      cout << "Please enter a valid choice\n";
      break;
    }
  }
  return 0; 
}