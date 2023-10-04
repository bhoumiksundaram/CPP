
#include <iostream>
using namespace std;
int main() {
    string user ;
    cout << "Enter: ";
    getline(std::cin >> std::ws, user);
    int totalChars {};
    int spaces {};
    for (int i = 0; user[i]; ++i) {
        if (user[i] == ' ') {
            spaces++;
        } else {
            totalChars++;
        }
    }
    cout << "There are total " << totalChars + spaces << " characters in " << user << "\n";
    cout << "There are total " << totalChars << " characters in " << user << " without spaces.\n";
}
