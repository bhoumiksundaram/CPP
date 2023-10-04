#include <iostream>
using namespace std;
int main() {
    int m1,m2,m3,m4,m5;
    cout<<"Enter the Marks of 5 subjects";
    cin>>m1;
    cin>>m2;
    cin>>m3;
    cin>>m4;
    cin>>m5;
    int average;
    average = (m1+m2+m3+m4+m5)/5;
    cout << "average: " << average << '\n';
    if (average > 90) {
        cout << "Grade: O\n";
    } else if (average > 80 && average < 90) {
        cout << "Grade: A+\n";
    } else if (average > 70 && average < 80) {
        cout << "Grade: A";
    } else if (average > 60 && average < 70) {
        cout << "Grade: B+";
    } else if (average > 50 && average < 60) {
        cout << "Grade: B";
    } else if (average > 40 && average < 50) {
        cout << "Grade: C";
    } else {
        cout << "Grade: F";
    }
    
    return 0;

}
