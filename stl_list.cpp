#include <iostream>
#include <list>
using namespace std;

void displayList(list<int>l) {
    for(int x : l) cout << x << " ";
    cout << endl;
}

int main() {
    list<int> l1;

    l1.push_back(3);
    l1.push_back(2);
    l1.push_back(1);
    displayList(l1); // 3 2 1

    l1.sort();
    displayList(l1); // 1 2 3

    cout << "front element " << l1.front() << endl; // 1
    cout << "back element " << l1.back() << endl; // 3

    l1.reverse(); // 3 2 1
    l1.pop_front(); // removes 3
    l1.pop_back(); // removes 1
    displayList(l1); // 2

    return 0;
}