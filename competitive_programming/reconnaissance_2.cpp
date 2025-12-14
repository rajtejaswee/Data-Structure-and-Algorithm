#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int min=INT_MAX;
    vector<int> arr(n);
    int ans1 = 0, ans2 = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++) {
        int diff = abs(arr[i] - arr[(i+1) % n]);

        if(diff < min) {
            min = diff;
            ans1 = i + 1;
            ans2 = ((i+1) % n) + 1;
        }
    }
    cout<<ans1<<" " <<ans2<<"\n";
    return 0;
    
}