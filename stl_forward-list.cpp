#include <iostream>
#include <forward_list>
using namespace std;

void displayList(forward_list<int>l) {
    for(int x : l) cout << x << " ";
    cout << endl;
}

int main() {
    forward_list<int> l1;

    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    displayList(l1); // 1 2 3

    l1.sort();
    displayList(l1); // 1 2 3

    cout << "front element " << l1.front() << endl; // 1

    l1.reverse(); // 3 2 1
    l1.pop_front(); // removes 3
    displayList(l1); // 2 1

    return 0;
}