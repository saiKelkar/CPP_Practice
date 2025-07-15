#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<char, int> um;

    string s = "abhishek";

    for(char c : s) um[c]++;
    for(auto c : um) cout << c.first << " " << c.second << endl;

    return 0;
}