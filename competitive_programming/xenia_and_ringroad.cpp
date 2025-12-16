#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int next = 0;
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        int current;
        cin>>current;
        if(current >= next){
            ans = ans + current;
        }
        
    }
}