#include <iostream>

void add(std::string expr) {
    size_t plus = expr.find('+');
    // divide the expression to separate strings
    std::string a_str = expr.substr(0, plus);
    std::string b_str = expr.substr(plus + 1);
    // convert strings to int
    int a = std::stoi(a_str);
    int b = std::stoi(b_str);

    std::cout << a + b << '\n';
}

int main() {
    int t;
    std::cin >> t;

    while(t--) {
        std::string expr;
        std::cin >> expr;

        add(expr);
    }
    return 0;
}