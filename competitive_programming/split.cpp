#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> freq;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int cnt_odd = 0; 
    int cnt_even = 0; 

    for (auto const& [val, count] : freq) {
        if (count % 2 == 1) {
            cnt_odd++;
        } else {
            cnt_even++;
        }
    }
    int ans = cnt_odd + (2 * cnt_even);
    if (cnt_odd == 0) {
        if ((cnt_even % 2) != (n % 2)) {
            ans -= 2;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}