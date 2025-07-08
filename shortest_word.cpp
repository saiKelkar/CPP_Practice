#include <iostream>
#include <string>
#include <sstream>
#include <limits>

int main() {
    int min_length = std::numeric_limits<int>::max();
    std::string sentence = "Hello from the other side";
    std::istringstream stream (sentence);
    std::string word;

    while (stream >> word) 
    {
        int len = word.length();
        if (min_length > len) {
            min_length = len;
        }
    }
    std::cout << min_length << std::endl;
    return 0;
}