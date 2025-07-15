#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {3, 4, 6, 1};
    s.insert(1);
    s.insert(-10);
    s.insert(-3);

    for(int x : s) cout << x << " "; // outputted as -10 -3 1 3 4 6
    cout << endl;
    // takes O(logn) time to erase element
    s.erase(1);

    auto it = s.find(-3);

    if(it == s.end()) cout << "element not in set" << endl;
    else cout << *it << " element is found" << endl;

    auto it1 = s.upper_bound(-3);
    cout << "found element just greater than -3 " << *it1 << endl; // element just higher than -3, which is 3, as we erased 1

    for(int x : s) cout << x << " "; // -10 -3 3 4 6
    cout << endl;

    return 0;
}