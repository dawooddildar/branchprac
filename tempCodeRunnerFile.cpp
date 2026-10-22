
//     int sum = 0;

//     while (pin > 0) {
//         sum += pin % 10;
//         pin /= 10;
//     }

//     return sum;
// }

// bool isStrongPin(int pin) {
//     int digits = countDigits(pin);
//     int sum = digitSum(pin);
//     int lastDigit = pin % 10;

//     return (digits == 4 && sum >= 20 && lastDigit % 2 != 0);
// }