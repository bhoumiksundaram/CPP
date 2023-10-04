
#include <iostream>
using namespace std;
int main() {
    
    // standard string --
    cout << "Standard String: \n";
    string user ;
    cout << "Enter something: ";
    getline(std::cin >> std::ws, user);
    cout << "You entered: " << user << '\n';

    // C-style string--
    std::cout << "\nC-Style String: \n";
    char name[25] {};
    cout << "Enter something again: ";
    cin.get(name, 25);
    cout  << name << '\n';
    
}
