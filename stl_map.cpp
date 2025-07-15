#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, int> m1, m2;
    
    // method 1 to insert elements in maps
    m1.insert(make_pair(1, 10));
    m1.insert(make_pair(2, 20));
    m1.insert(make_pair(3, 30));

    for(auto x : m1) cout << x.first << " " << x.second << endl;

    // method 2 to insert elements in maps
    m2[100] = 1; // {{100, 1}, {200, 2}, {300, 3}}
    m2[200] = 2;
    m2[300] = 3;

    for(auto x : m2) cout << x.first << " " << x.second << endl;

    // direct initialization and declaration
    map<int, int> m = {{1, 2}, {2, 5}, {3, 7}, {4, 8}};

    // following prints each character and it's frequency
    string name = "abhishek";
    map<char, int> mChar;

    for(auto x : name) mChar[x]++;
    for(auto x : mChar) cout << x.first << " " << x.second << endl;

    return 0;
}