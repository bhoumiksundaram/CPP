#include <iostream>

/*
* Different Operators in c++
* PRN: 22070123030
*/
using namespace std;

int main() {
    int num1 {1};
    int num2 {2};
    cout << "\nArithmetic Operators\n";
    cout << "num1 + num2:\t" << num1 + num2 << '\n';
    cout << "num1 - num2:\t" << num1 - num2 << '\n';
    cout << "num1 / num2:\t" << static_cast<double>(num1) / static_cast<double>(num2) << '\n';
    cout << "num1 * num2:\t" << num1 * num2 << '\n';
    cout << "num1 % num2:\t" << num1 % num2 << '\n';

    cout << "\nRelational Operators\n";
    cout << "num1 == num2\t" << (num1 == num2) << '\n';
    cout << "num1 != num2\t" << (num1 != num2) << '\n';
    cout << "num1 >= num2\t" << (num1 >= num2) << '\n';
    cout << "num1 <= num2\t" << (num1 <= num2) << '\n';
    cout << "num1 > num2\t" << (num1 > num2) << '\n';
    cout << "num1 < num2\t" <<  (num1 < num2) << '\n';

    bool cond1 {true};
    bool cond2 {false};

    cout << "\nLogical Operators\n";
    cout << "num1 && num2:\t" << (cond1 && cond2) << '\n';
    cout << "num1 || num2:\t" << (cond1 || cond2) << '\n';

    int larger {};

    larger = (num1 > num2) ? num1 : num2;

    cout << "\nArithmetic if Operator (?:)\n" << larger << '\n';

    cout << "\nIncrement/Decrement Operators\n";
    
    int z {num1++};
    int k {--num2};
    cout << "num1++\t" << z << '\n';
    cout << "--num2\t" << k << '\n';

    cout << "\nAssignment Operators\n";
    int number4 {num1 *= num2};
    int number5 {num1 += num2};
    int number6 {num1 /= num2};
    cout << "num1 *= num2\t" << number4 << '\n';
    cout << "num1 += num2\t" << number5 << '\n';
    cout << "num1 /= num2\t" << number6 << '\n';
    cout << endl;

    return 0;
}
