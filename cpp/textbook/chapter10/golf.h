#ifndef GOLF_H
#define GOLF_H

#include <string>

class golf {
    std::string fullname;
    int handicap;
public:
    golf(const std::string& name, int hc); // set by parameters
    golf();                                 // set by user input, returns 1 if name entered, 0 otherwise
    void set_handicap(int hc);                     // set handicap
    void showgolf() const;                         // display golf info
};

#endif