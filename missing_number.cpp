#include <iostream>
#include <algorithm>
#include <vector>

void missing_num(std::vector<int> t) {
    std::sort(t.begin(), t.end());

    std::vector<int> s;
    for(int i = 1; i <= t.size() + 1; i++) {
        s.push_back(i);
    }

    for(int i = 0; i <= t.size(); i++){
        if(t[i] != s[i]) {
            std::cout << s[i];
            break;
        }
    }
}

int main() {
    int t;
    std::cin >> t;

    std::vector<int> i;
    for(int x = 0; x < t - 1; x++) {
        int val;
        std::cin >> val;
        i.push_back(val);
    }
    missing_num(i);
    return 0;
}