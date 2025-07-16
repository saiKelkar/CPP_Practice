#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    int a, b, c;
    while(n--) {
        cin >> a >> b >> c;

        if(a == 1 && b == 1 || a == 1 && c == 1 || b == 1 && c == 1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}