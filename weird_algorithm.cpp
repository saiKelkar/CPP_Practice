#include <iostream>

long long int series(long long int t){
    if(t % 2 == 0) {
        t = t / 2;
    }
    else {
        t = (t * 3) + 1;
    }
    return t;
}

int main() {
    long long int t;
    std::cin >> t;

    while(t >= 1) {
        std::cout << t << " ";
        if (t == 1) break;
        t = series(t);
    }

    return 0;
}