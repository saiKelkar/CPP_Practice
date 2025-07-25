#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "number of elements in stack are " << s.size() << endl;

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}