#include <iostream>

using std::cout;
using std::endl;


long long algCollatz(long long number) {
    if (number >= 2) {
        if (number % 2 == 0) {
            number /= 2;
            cout << number << endl;
        }
        else if (number % 2 == 1) {
            number = number * 3 + 1;
            cout << number << endl;
        }
        if (number == 1) {
            return 1;
        }
        return algCollatz(number);
    }
    else {
        cout << "Number must be greater than or equal 2" << endl;
    }
}


int main() {
    algCollatz(28);
    return 0;
}