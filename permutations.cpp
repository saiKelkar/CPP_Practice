#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> x;

    if(n == 3 || n == 2) {
        std::cout << "NO SOLUTION" << std::endl;
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            x.push_back(i);
        }
    }
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            x.push_back(i);
        }
    }

    for(int i : x) {
        std::cout << i << " ";
    }

    return 0;
}