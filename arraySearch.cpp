
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

    int search {};
    cout << "Enter the number to search: ";
    cin >> search;
    int flag {};
    for (int i = 0; i < size; i++) {
        if (search == numbers[i]) {
            cout << "Search Successful! " << search << " was found at index position " << i << '\n';
            flag = 1;
        }
    }
    if (!flag) {
        std::cout << " Item not found.";
    }

    return 0;

}
