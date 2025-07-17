#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a, count = 0, hike = 0;
        int skip = 0;

        for(int i = 0; i < n; i++) {
            cin >> a;

            if(skip == 1) {
                skip = 0;
                continue;
            }

            if(a == 0) {
                count++;
                if(count == k) {
                    hike++;
                    count = 0;
                    skip = 1;
                } 
            }
            else {
                count = 0;
            }
        }
        cout << hike << endl;
    }
    return 0;
}