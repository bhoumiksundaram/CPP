

#include <iostream>
using namespace std;
int main() {
    int size {};
    cout << "Enter the size of the array: ";
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i << " : ";
        cin >> numbers[i];
    }
    cout << '\n';
    for (int i = 1; i < size - 1; ++i) {
        if ((numbers[i] > numbers[i - 1]) && (numbers[i] > numbers[i + 1])) {
            cout << numbers[i] << " is a peak.\n";
        } else {
            cout << numbers[i] << " is not a peak.\n";
        }
    }

}
