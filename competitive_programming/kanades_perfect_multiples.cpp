#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        n = a.size();
        vector<int> used(n, 0);
        vector<long long> ans;
        for (int i = 0; i < n; i++) {
            if (used[i]) continue;
            long long x = a[i];
            long long need = k / x;
            if (need > n) {
                cout << -1 << "\n";
                goto nxtcase;
            }
            vector<int> take;
            bool ok = true;
            for (long long m = 1; m <= need; m++) {
                long long v = x * m;
                int pos = lower_bound(a.begin(), a.end(), v) - a.begin();
                if (pos < n && a[pos] == v) take.push_back(pos);
                else { ok = false; break; }
            }
            if (!ok) {
                cout << -1 << "\n";
                goto nxtcase;
            }
            ans.push_back(x);
            for (int id : take) used[id] = 1;
        }
        cout << (int)ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
        }
        cout << "\n";
        nxtcase:;
    }
    return 0;
}
