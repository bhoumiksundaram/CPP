#include <iostream>
using namespace std;
void evenOdd(int num) {
    if ((num & 1) == 0) {
        cout << num << " is even.\n";
    }
    else {
        cout << num << " is odd.\n";
    }
}

int main() {
    int num1 {};
    while (cin) {
        cout << "Enter a number: ";
        cin >> num1; 
        evenOdd(num1);
    }
    return 0;
}
