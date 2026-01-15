#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 1; i <= 10; i++) {
        cout<<n;
        cout<<" * ";
        cout<<i;
        cout<<" = ";
        cout<< n * i;
        cout<<endl;
    }
}