#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long curr_max = 0;
        long long curr_min = 0;

        for (int i = 0; i < n; i++) {
            long long red_max = curr_max - a[i];
            long long blue_max = b[i] - curr_max;
            long long red_min = curr_min - a[i];
            long long blue_min = b[i] - curr_min;

            curr_max = max({red_max, red_min, blue_max, blue_min});
            curr_min = min({red_max, red_min, blue_max, blue_min});
        }
        cout << curr_max << endl;
    }
}