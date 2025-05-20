#include <iostream>
using namespace std;
int main()
{
    const int ArSize = 20;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
    return 0; 
}
