
/* Largest Number And Smallest Number*/

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

    int smallest {};
    int largest {};

    smallest = numbers[0];
    largest = numbers[0];
    for (int i = 0; i < size; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        } else if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "\nLargest Number is: " << largest << '\n';
    cout << "Smallest Number is: " << smallest << '\n';

}
