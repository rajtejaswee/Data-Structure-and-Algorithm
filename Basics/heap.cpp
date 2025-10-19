#include<bits/stdc++.h>
using namespace std;

void explainHeaps() {
    // Max Heap
    priority_queue<int> pq;

    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(2);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    //Min Heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(9);
    min_pq.push(4);
    min_pq.push(3);
    min_pq.push(4);
    cout << min_pq.top() << endl;
}
int main() {
    explainHeaps();
    return 0;
}