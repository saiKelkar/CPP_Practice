#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long int k, a, b;
    scanf ("%lld %lld %lld", &k, &a, &b);
    long long int count = 0;

    if(a > 0){
        count = b / k;
    }
    else if(a <= 0) {
        a = -a;
        count = b / k + a / k + 1;
    }
    else if(a < 0 && b < 0) {
        a = -a; b = -b;
        swap(a, b);
        count = b / k;
    }
    
    cout << count << endl;
    return 0;
}