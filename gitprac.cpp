#include <iostream>
using namespace std;

int countDigits(int pin);
int digitSum(int pin);
// bool isStrongPin(int pin);

int main() {
    int pin;

    cout << "Enter PIN: ";
    cin >> pin;

    cout << "Digit count: " << countDigits(pin) << endl;
    cout << "Digit sum: " << digitSum(pin) << endl;

    // if (isStrongPin(pin)) {
    //     cout << "Strong PIN" << endl;
    // }
    // else {
    //     cout << "Weak PIN" << endl;
    // }

    return 0;
}

int countDigits(int pin) {
    int count = 0;

    for (int i = 1; pin > 0; i++) {
        pin = (pin / 10);
        count ++ ;
    }

    return count;
}

int digitSum(int pin) {
    int sum = 0;

    while (pin > 0) {
        pin = pin % 10;
        sum += pin ;
        pin /= 10;
    }

    return sum;
// }

// bool isStrongPin(int pin) {
//     int digits = countDigits(pin);
//     int sum = digitSum(pin);
//     int lastDigit = pin % 10;

//     return (digits == 4 && sum >= 20 && lastDigit % 2 != 0);
// }