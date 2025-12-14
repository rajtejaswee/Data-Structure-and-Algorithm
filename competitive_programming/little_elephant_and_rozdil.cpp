#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int min_value = INT_MAX;
    int min_idx = -1;
    int count = 0;

    for(int i = 0; i<n;i++) {
        int t;
        cin>>t;
        if(t<min_value) {
            min_value=t;
            min_idx = i+1;
            count = 1;
        }
        else if(t == min_value) {
            count++;
        }
    }

    if(count > 1) {
        cout<<"Still Rozdil"<<endl;
    }
    else{
        cout<<min_idx<<endl;
    }
    return 0;
}