#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<vector<int>> x(5, vector<int>(5));
    int row = 0, col = 0;
    int count = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> x[i][j];
            if(x[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    count = abs(row - 2) + abs(col - 2);
    cout << count << endl;

    return 0;
}