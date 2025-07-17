#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, temp;
    set<int> s;
    cin >> n;

    int p, q;
    cin >> p;
    while(p--) {
        cin >> temp;
        s.insert(temp);
    }
    cin >> q;
    while(q--) {
        cin >> temp;
        s.insert(temp);
    }

    for(int i = 1; i <= n; i++) {
        if(s.find(i) == s.end()) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}