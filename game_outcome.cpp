#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sumRow;
    vector<int> sumCol;
    int sum = 0;
    
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
        sumRow.push_back(sum);
        sum = 0;
    }

    vector<vector<int>> b(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            sum += b[i][j];
        }
        sumCol.push_back(sum);
        sum = 0;
    }


    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(sumCol[j] > sumRow[i]) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}

