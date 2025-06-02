#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

void toUpperCase(string& str) {
    for (char& ch : str) {
        ch = toupper(ch);
    }
}
int main() {
    string input;
    cout << "Enter a string (type 'exit' to quit): ";
    
    while (getline(cin, input)) {
        if (input == "exit") {
            break;
        }
        
        toUpperCase(input);
        cout << "Uppercase: " << input << endl;
        cout << "Enter another string (type 'exit' to quit): ";
    }
    
    return 0;
}