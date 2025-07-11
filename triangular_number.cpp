#include <iostream>
#include <cmath>

bool triangle(int n) {
    float root = std::sqrt(1 - 4 * (-2 * n));

    float root_1 = (-1 + (root)) / 2;
    float root_2 = (-1 - (root)) / 2;

    if(root_1 > 0 && floor(root_1) == root_1) {
        return true;
    }
    if(root_2 > 0 && floor(root_2) == root_2) {
        return true;
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;

    if(triangle(n)) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
    return 0;
}