#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char c; 
    set<pair<int, int>> a;
    for(int j = 1; j <= n; j++) {
        for(int i = 1; i <= m; i++) {
            cin >> c;
            if(c == '*') {
                a.insert({j, i});
            }
        }
    }

    map<int, int> row, col;
    for(auto [r, t] : a) {
        row[r]++;
        col[t]++;
    }

    int missingRow = -1, missingCol = -1;
    for(auto [r, freq] : row) {
        if(freq == 1) missingRow = r;
    }
    for(auto [t, freq] : col) {
        if(freq == 1) missingCol = t;
    }

    cout << missingRow << " " << missingCol;

    return 0;
}