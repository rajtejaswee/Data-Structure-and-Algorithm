#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = a; i < b; ++i)

void run_case() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (auto &x : a) cin >> x;

    set<int> s;
    rep(i, 0, n + 2) s.insert(i);

    vi cnt(n + 5, 0);

    auto add = [&](int val) {
        if (val > n + 1) return;
        if (cnt[val] == 0) s.erase(val);
        cnt[val]++;
    };

    auto remove = [&](int val) {
        if (val > n + 1) return;
        cnt[val]--;
        if (cnt[val] == 0) s.insert(val);
    };

    rep(i, 0, k) {
        add(a[i]);
    }

    int ans = *s.begin();
    rep(i, k, n) {
        remove(a[i - k]);
        add(a[i]);
        ans = max(ans, *s.begin());
    }

    cout << min(ans, k - 1) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        run_case();
    }
    return 0;
}