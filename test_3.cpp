#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

int compare(int k, vector<tuple<int, int, int>> s) {
    bool changed = true;
    
    while(changed) {
        changed = false;
        for(auto it = s.begin(); it != s.end(); ) {
            auto[low, high, value] = *it;
            if(k >= low && k <= high && k < value) {
                k = value;
                changed = true;
                it = s.erase(it);
                continue;
            }
            else {
                ++it;
            }
        }  
    }
    return k;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        int l, r, real;
        vector<tuple<int, int, int>> s;
        for(int i = 0; i < n; i++) {
            cin >> l >> r >> real;
            s.push_back(make_tuple(l, r, real));
        }

        cout << compare(k, s) << endl;
    }
    return 0;
}