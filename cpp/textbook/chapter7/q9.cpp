#include <iostream>
using namespace std;

struct student {
  string fullname;
  string hobby;
  int ooplevel;
};

int getinfo(student *, int);
void display(student);
void display2(const student *);
void display3(const student *, int);

int main() {
  cout << "Enter class size: ";
  int class_size;
  cin >> class_size;
  while(cin.get() != '\n') {
    continue;
  }
  student * ptr_student = new student[class_size];
  int entered = getinfo(ptr_student, class_size);
  for(int i = 0; i < entered; i++) {
    display(ptr_student[i]);
    display2(&ptr_student[i]);
  }
  display3(ptr_student, entered);
  delete [] ptr_student;
  cout << "Done\n";
  return 0;
}