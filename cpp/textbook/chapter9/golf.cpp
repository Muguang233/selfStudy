#include <iostream>
#include "golf.h"
#include <cstring>
using namespace std;

void setgolf(golf & g, const char * name, int hc) {
    strncpy(g.fullname, name, Len - 1);
    g.fullname[Len - 1] = '\0'; 
    g.handicap = hc;
}

int setgolf(golf & g) {
    cout << "Enter name (or empty string to quit): ";
    cin.getline(g.fullname, Len);
    if (g.fullname[0] == '\0') {
        return 0;
    }
    
    cout << "Enter handicap: ";
    cin >> g.handicap;
    cin.ignore();
    return 1;
}
void handicap(golf & g, int hc) {
    g.handicap = hc;
}
void showgolf(const golf & g) {
    cout << "Name: " << g.fullname << ", Handicap: " << g.handicap << endl;
}