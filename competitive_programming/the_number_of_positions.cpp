#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin>>n>>a>>b;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        int front = i - 1;
        int back = n - i;

        if(front >= a && back <= b) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;

}