#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool up = false, down = false, left = false, right = false;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (a[j].first == a[i].first && a[j].second > a[i].second) up = true;
            if (a[j].first == a[i].first && a[j].second < a[i].second) down = true;
            if (a[j].second == a[i].second && a[j].first > a[i].first) right = true;
            if (a[j].second == a[i].second && a[j].first < a[i].first) left = true;
        }
        if (up && down && left && right) ans++;
    }

    cout << ans << "\n";
    return 0;
}
