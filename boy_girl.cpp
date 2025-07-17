#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> t;
    for(int i = 0; i < s.length(); i++) {
        t.insert(s[i]);
    }

    if(t.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}