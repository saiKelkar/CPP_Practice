#include <iostream>

int gold(int a, int b, int x) {
    if(x == b) {
        return a;
    }
    else if(x == a){
        return b;
    }
    return x;
}

int main() {
    int t;
    std::cin >> t;

    int n, x, s;
    while(t--) {
        std::cin >> n >> x >> s;
        int a, b;
        while(s--) {
            std::cin >> a >> b;
            x = gold(a, b, x);
        }
        std::cout << x << std::endl;
    }
    return 0;
}