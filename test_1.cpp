#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    while(n--) {
        cin >> s;
        char min = s[0];

        for(char c : s) {
            if (c < min) {
                min = c;
            }
        }
        cout << min << endl;
    }
    
    return 0;
}