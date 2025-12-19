#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int l, a, b;
        cin>>l>>a>>b;
        int maxi = INT_MIN;
        int current = a;
        for(int i = 0; i < l; i++) {
            current = (current + b) % l;
            maxi = max(current, maxi);
        }
        cout<<maxi<<endl;
    }
}