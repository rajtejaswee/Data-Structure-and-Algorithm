#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        bool flag = false;
        for (int i = 0; i < n && !flag; i++) {
            for (int j = i + 1; j < n && !flag; j++) {
                if((arr[j] % arr[i]) % 2 == 0){
                    cout << arr[i] << " " << arr[j] << "\n";
                    flag = true;
                }
            }
        }
        
        if(!flag){
            cout << -1 << "\n";
        }
    }
}