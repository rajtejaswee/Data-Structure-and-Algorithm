#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i = 0; i < m; i++) {
        if (arr[i] >= 0) {
            break; 
        }
        ans += abs(arr[i]);
    }
    cout << ans << "\n";
    return 0;
}