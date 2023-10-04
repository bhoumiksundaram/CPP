
#include <iostream>
using namespace std;
int main() {
    string user;
    cout << "Enter a string: ";
    getline(std::cin >> std::ws, user);
    string final;
    for (int i = 0; user[i] != '\0'; ++i) {
        if (i == 0) {
            final += user[i]; 
        }
        if (user[i] == ' ') {
            final += user[i+1];
        }
    }
    cout << "The first characters of each word is: " << final << '\n';
}
