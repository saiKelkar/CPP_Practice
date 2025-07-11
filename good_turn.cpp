#include <iostream>
using namespace std;

void turn(int x, int y) {
    x + y > 6 ? cout << "YES\n" : cout << "NO\n";
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int x,y;
        cin>>x>>y;
        // your code goes here
        turn(x, y);
    }
    
	return 0;
}
