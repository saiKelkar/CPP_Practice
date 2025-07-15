#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "number of elements in queue are " << s.size() << endl;

    while(!s.empty()) {
        cout << s.front() << " ";
        s.pop();
    }

    return 0;
}