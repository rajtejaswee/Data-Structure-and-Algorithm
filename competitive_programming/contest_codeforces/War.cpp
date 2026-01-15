#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int limL = k - 1;
    int limR = n - k;
    int ans = 0;

    for (int l = 0; l <= limL; ++l) {
        if (l > 0 && 2 * l - 1 > m) break;

        int bestR = -1;
        
        int r1 = (m - l + 1) / 2;
        if (r1 >= l) bestR = max(bestR, r1);
        
        int r2 = m - 2 * l + 1;
        if (r2 >= 0) bestR = max(bestR, min(r2, l - 1));

        if (bestR != -1) {
            ans = max(ans, l + min(bestR, limR) + 1);
        }
    }
    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}