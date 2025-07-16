#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void invertBits(int num) {
    // calculating number of bits in the number
    // for num = 9, binary is 1001, so log2(9) = 3.17, so x = 4
    int x = log2(num) + 1;
    
    // creates a 32-bit binary of a number
    bitset<32> b(num);
    // reversing the bits one by one
    for(int i = 0; i < x; i++) {
        // flips each of the first x bits
        b.flip(i);
    }
    // converting bitset to number
    cout << b.to_ulong() << endl;
}

int main(){
    int n = 9;

    // converts 9 to a 32-bit binary
    bitset<32> b1(n);
    // converts 9 to a 10-bit binary
    bitset<10> b2(n);
    // manually creates a 32-bit bitset from the string 1001
    bitset<32> b3(string("1001"));

    cout << b1 << endl;
    cout << b2 << endl;
    cout << b3 << endl;

    invertBits(n);

    return 0;
}