#include <iostream>

int main() {
    int a, b, c;
    int sum = 0;

    std::cout << "Enter first integer: ";
    std::cin >> a;

    std::cout << "Enter second integers: ";
    std::cin >> b;


    if(a > b) {
        c = a;
        a = b;
        b = c;
    }

    if(a < b) {
        for(int i = a; i <= b; i++) {
            sum += i;
        }
        std::cout << "Sum is: " << sum << std::endl;
    }
    else {
        std::cout << a << std::endl;
    }

    return 0;
}