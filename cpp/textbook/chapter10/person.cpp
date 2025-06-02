#include <iostream>
using namespace std;
#include "person.h"

Person::Person(const string & ln, const char * fn) {
    lname = ln;
    int i;
    for (i = 0; i < LIMIT - 1 && fn[i] != '\0'; ++i) {
        fname[i] = fn[i];
    }
    fname[i] = '\0'; 
}
void Person::Show() const {
    cout << fname << " " << lname << endl;
}
void Person::FormalShow() const {
    cout << lname << ", " << fname << endl;
}
