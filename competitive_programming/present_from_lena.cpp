#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i <= 2 * n; ++i) {
        int peak = n - abs(n - i);

        
        for (int s = 0; s < abs(n - i) * 2; ++s) {
            cout << " ";
        }

        
        for (int j = 0; j <= peak; ++j) {
            cout << j;
            if (peak > 0) cout << " "; 
        }

        
        for (int j = peak - 1; j >= 0; --j) {
            cout << j;
            if (j > 0) cout << " "; 
        }

        cout << endl;
    }

    return 0;
}