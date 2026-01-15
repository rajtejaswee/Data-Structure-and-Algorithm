#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll C[35][35];

void compute() {
    for (int i = 0; i < 35; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
}

int main() {
    compute();
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        int d = 0;
        ll temp = n;
        while (temp > 1) {
            temp >>= 1;
            d++;
        }
        ll wins = 0;
        for (int i = 0; i <= d - 1; i++) {
            int extra  = (int)k - i - 1;
            if (extra < 0) continue;
            for (int j = 0; j <= min(i, extra); j++) {
                wins += C[i][j];
            }
        }

        if (d + 1 <= k) {
            wins += 1;
        }
        cout << n - wins << endl;
    }
}