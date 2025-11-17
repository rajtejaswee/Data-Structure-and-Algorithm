#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int firstRight = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '>') {
                firstRight = i;
                break;
            }
        }
        int lastLeft = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '<') {
                lastLeft = i;
                break;
            }
        }
        if (firstRight == -1 || lastLeft == -1) {
            cout << -1 << '\n';
            continue;
        }
        if (firstRight < lastLeft) {
            cout << -1 << '\n';
            continue;
        }
        int leftSide = firstRight;
        int rightSide = (n - 1) - lastLeft;

        cout << max(leftSide, rightSide) << '\n';
    }

    return 0;
}
