#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> arr(m);
    for(int i = 0; i < m; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1;
    int ans_min = INT_MAX;
    while (j<m) {
        int curr_min = arr[j] - arr[i];
        ans_min = min(curr_min, ans_min);
        i++; 
        j++;
    }
    cout<<ans_min<<endl;
    return 0;
}