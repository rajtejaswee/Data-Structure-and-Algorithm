#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char target = s[n - 1];
        int ops = 0;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] != target) ops++;
        }

        cout << ops << "\n";
    }

    return 0;
}
