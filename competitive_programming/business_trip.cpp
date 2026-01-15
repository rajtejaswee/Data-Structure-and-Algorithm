#include<bits/stdc++.h>
using namespace std;    

int main() {
    int k;
    cin>>k;
    vector<int> arr(12);
    int cnt = 0;
    for(int i = 0; i < 12; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i = 0; i<12; i++) {
        if(k > 0) {
            k = k - arr[i];
            cnt++;
        }
    }
    if(k > 0) {
        cout<< "-1"<<endl;
    }
    else {
        cout<<cnt<<endl;
    }
    return 0;
}