#include <iostream>
using namespace std;
int main() {
    int x {5};
    int *y {&x};
    cout << "x:\t\t\t\t" << x << '\n';
    cout << "dereferencing the pointer (*y):\t" << *y << '\n';
    cout << "Address of x:\t\t" << &x << '\n';
    cout << "y:\t\t\t" << y << '\n';
    cout << "Address of y:\t\t" << &y << '\n';
}
