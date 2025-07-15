#include <iostream>
#include <set>
using namespace std;

int main() {
    set<pair<int, int>> s;
    s.insert({3, 4});
    s.insert({5, 10});
    s.insert({3, 1});

    for(pair<int, int> x : s) {
        cout << x.first << " " << x.second << endl;
    }

    set<pair<int, int>> sp = {{5, 10}, {14, 20}, {50, 100}, {75, 125}, {8, 16}};

    auto it = sp.lower_bound({4, 10});
    cout << it -> first << " " << it -> second << endl;
    auto it1 = sp.upper_bound({50, 100});
    cout << it1 -> first << " " << it1 -> second << endl;

    return 0;
}