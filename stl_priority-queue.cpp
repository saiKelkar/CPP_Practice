#include <iostream>
#include <queue>
using namespace std;

void displayPriorityQueue(priority_queue<int> pq) {
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);

    cout << pq.size() << endl;
    cout << pq.top() << endl;

    displayPriorityQueue(pq);

    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(5);
    pq_min.push(1);
    pq_min.push(10);
    
    // displayPriorityQueue(pq_min);

    return 0;
}