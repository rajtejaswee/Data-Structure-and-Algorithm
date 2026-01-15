#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int cnt =0;
    for (int a = 0; a * a <= n; a++) {
        int b = n - (a*a);
        if(a + (b*b) == m) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}