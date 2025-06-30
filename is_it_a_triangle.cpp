#include <iostream>

bool triangle(int a, int b, int c) {
    if(a > 0 && b > 0 && c > 0){
        return a + b > c && a + c > b && b + c > a;
    }
    return false;
}
