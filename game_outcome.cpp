#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumRow = 0;
    int sumCol = 0;

    vector<int> a(n * n);
    for(int i = 0; i < n * n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                sumRow += a[i * n + k];
            }
            for(int k = 0; k < n; k++) {
                sumCol += a[k * n + j];
            }
            if(sumCol > sumRow) {
                cout << a[i * n + j] << endl;
                break;
            }
            sumCol = 0;
            sumRow = 0;
        }
    }
    
    return 0;
}

