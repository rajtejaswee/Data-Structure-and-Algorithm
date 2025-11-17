#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Sort the array
        sort(a.begin(), a.end());
        
        // Strategy: Put smaller half at odd positions, larger half at even positions
        // Odd positions: 0, 2, 4, ... (0-indexed)
        // Even positions: 1, 3, 5, ... (0-indexed)
        
        // Split into two groups
        int mid = (n + 1) / 2; // Size of first group (odd positions)
        
        // The maximum of the first group (odd positions)
        int maxOdd = a[mid - 1];
        
        // The minimum of the second group (even positions)
        int minEven = a[mid];
        
        // If max of odd positions <= min of even positions, Souvlaki wins
        if (maxOdd <= minEven) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}