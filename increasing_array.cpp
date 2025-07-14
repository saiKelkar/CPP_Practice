#include <iostream>
#include <vector>

int main() {
    long long int n;
    long long int step = 0;
    std::cin >> n;

    std::vector<long long int> x(n);
    for(int i = 0; i < n; i++) {
        std::cin >> x[i];
    }

    for(int i = 1; i < n; i++){
        if(x[i] < x[i - 1]) {
            step += (x[i - 1] - x[i]);
            x[i] = x[i - 1];
        }
    }
    std::cout << step << std::endl;
    return 0;
}