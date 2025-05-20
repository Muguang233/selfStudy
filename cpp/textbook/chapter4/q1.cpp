#include <iostream>
using namespace std;

struct student {
  string first;
  string last;
  char grade;
  int age;
};

int main() {
  struct student s1;
  cout << "What is your first name? ";
  cin >> s1.first;
  cout << "what is your last name? ";
  cin >> s1.last;
  cout << "what letter grade do you deservse? ";
  cin >> s1.grade;
  cout << "what is your age? ";
  cin >> s1.age;
  cout << "Name: " << s1.last << ", " << s1.first << endl;
  cout << "Grade: " << s1.grade << endl << "Age: " << s1.age << endl;

  return 0;
}