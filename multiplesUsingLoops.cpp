#include <iostream>
using namespace std;
int main() {
    int number {};
    int howMany {};
    cout << "Enter a number: ";
    cin >> number;
    cout << "How many multiples do you want: ";
    cin >> howMany;
    int counter {};
    cout << "\nUsing While Loop\n\n";
    
	while (counter < (howMany+1)) {
        std::cout << number << " x " << counter << " = " << number * counter << '\n'; 
        ++counter;
    }
    cout << "\nUsing For Loop\n\n";
    
	//
	for(int i = 0; i < (howMany+1); ++i) {
        cout << number << " x " << i << " = " << number * i << '\n';
    }
    
    
    //
    int doCounter {};
    cout << "\nUsing do-while loop\n\n";
    do {
        cout << number << " x " << doCounter << " = " << number * doCounter << '\n';
        ++doCounter;
    } while (doCounter < (howMany + 1));


    return 0;
}
