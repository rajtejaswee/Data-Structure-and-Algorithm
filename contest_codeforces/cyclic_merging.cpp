#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(auto &x : a) cin >> x;

        long long sum = 0, mx = 0;

        for(int i = 0; i < n; i++) {
            long long v = max(a[i], a[(i + 1) % n]);
            sum += v;
            mx = max(mx, v);
        }

        cout << sum - mx << "\n";
    }

    return 0;
}
