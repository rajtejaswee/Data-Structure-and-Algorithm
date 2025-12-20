#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    int low = 0, high = n - 1;
    int ans = n; // Default: hypothetical index after last element

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > x) { 
            ans = mid;      // Possible answer (it is > x)
            high = mid - 1; // Look for a smaller index on the left
        }
        else {
            low = mid + 1;  // Element is <= x, need to go right
        }
    }
    return ans;
}