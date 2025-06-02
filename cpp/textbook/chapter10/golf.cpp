#include <iostream>
#include "golf.h"

golf::golf(const std::string& name, int hc) {
    fullname = name;
    handicap = hc;
}

golf::golf() {
    std::string name;
    std::cout << "Enter name (or empty string to quit): ";
    std::getline(std::cin, name);
    if (name.empty()) {
        handicap = 0; // Default handicap if no name is entered
        return; // Exit if no name is provided
    }
    fullname = name;
    std::cout << "Enter handicap: ";
    std::cin >> handicap;
    std::cin.ignore(10000, '\n');
}

void golf::set_handicap(int hc) {
    handicap = hc;
}

void golf::showgolf() const {
    std::cout << "Name: " << fullname << ", Handicap: " << handicap << std::endl;
}