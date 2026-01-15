#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> min_pq;
    for(int i = 0; i < m; i++) {
        int seats;
        cin>>seats;
        pq.push(seats);
        min_pq.push(seats);
    }
    int max_profit = 0;
    for(int x = 0; x < n; x++) {
        int top = pq.top();
        pq.pop();
        max_profit += top;
        top--;
        if(top > 0) {
            pq.push(top);
        }
    }
    int min_profit = 0;
    for(int x = 0; x < n; x++) {
        int top = min_pq.top();
        min_pq.pop();
        min_profit += top;
        top--;
        if(top > 0) {
            min_pq.push(top);
        }
    }
    cout<<max_profit<<" "<<min_profit<<endl;
    return 0; 
}