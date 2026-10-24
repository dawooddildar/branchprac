#include <iostream>

bool isEven(int number);

int main() {
    int value = 46;

    if (isEven(value) != true )
        std::cout << "Even";
    else
        std::cout << "Odd";

    return 0;
}

bool isEven(int number) {
    return number % 2 == 0;
}
