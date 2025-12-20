#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n; // Default answer if not found

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;      // Potentially the answer, look for smaller index on left
            high = mid - 1;
        }
        else {
            low = mid + 1;  // Element too small, look right
        }
    }
    return ans;
}