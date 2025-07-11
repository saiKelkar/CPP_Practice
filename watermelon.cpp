#include <iostream>

int main() {
    int weight;
    std::cin >> weight;

    if(weight > 2) {
        weight % 2 == 0 ? std::cout << "YES\n" : std::cout << "NO\n";
    } 
    if(weight <= 2) {
        std::cout << "NO\n";
    }
    return 0;
}