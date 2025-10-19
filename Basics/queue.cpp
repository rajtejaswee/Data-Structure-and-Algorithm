#include<bits/stdc++.h>
using namespace std;

void explainQueue() {
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(6);
    // {2,3,4,6}
    q.back() += 5; // {2,3,4,11}

    cout << q.front(); // prints 2

    q.pop(); // {3,4,11}

    // swap is same as that of stack.
}