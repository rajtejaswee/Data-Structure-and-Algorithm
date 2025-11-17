#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n, a;
        cin >> n >> a;
        vector<long long> arr(n);
        for(long long &x : arr) {
            cin >> x;
        }
        long long L = lower_bound(arr.begin(), arr.end(), a) - arr.begin(); 
        long long R = n - (upper_bound(arr.begin(), arr.end(), a) - arr.begin());

        if (R > L) cout << a + 1 << "\n";
        else       cout << a - 1 << "\n";
    }
    return 0;
}