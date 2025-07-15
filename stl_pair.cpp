#include <iostream>

int main() {
    std::pair<int, int> p1 = {2, 3};
    std::pair<int, char> p2 = std::make_pair(2, 'a');

    std::cout << p1.first << " " << p1.second << std::endl;
    std::cout << p2.first << " " << p2.second << std::endl;

    std::pair<int, std::pair<int, char>> p3 = {2, {2, 'a'}};
    std::cout << p3.first << " " << p3.second.first << " " << p3.second.second << std::endl;

    return 0;
}