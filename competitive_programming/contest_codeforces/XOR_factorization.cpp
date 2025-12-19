#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        int k;
        cin>>n>>k;
        if(k % 2 != 0) {
            for(int i = 0; i < k; i++) {
                cout<<n<<" ";
            }
        }
        else {
            for(int i = 0; i < k - 1; i++) {
                cout<< n << " ";
            }
            cout << 0;
        }
        cout<<endl; 
    }
}