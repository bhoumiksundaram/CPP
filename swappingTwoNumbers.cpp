/* Swapping two numbers */
using namespace std;
#include <iostream>
void swap(int *a, int *b);

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a {};
    int b {};
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "\nAfter Swap\n";
    swap(&a, &b);
    cout << "a is: " << a << "\nb is: " << b << '\n';
    return 0;

}
