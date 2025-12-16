#include<bits/stdc++.h>
using namespace std;

//iterative approach
int binarySearchIterative (vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(nums[mid] == target) {
            return mid;
        }
        else if(target > nums[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

// Recursive Approach
int binarySearchRecursive(vector<int>& nums, int low, int high, int target) {
    if(low > high) {
        return -1;
    }
    int mid = (low+high)/2;
    if(nums[mid] == target) {
        return mid;
    }
    else if(target > nums[mid]) {
       return binarySearchRecursive(nums, mid+1, high, target);
    }
    return binarySearchRecursive(nums, low, mid-1, target);
}

int main() {
    int t;
    cin>>t;
    int resultIterative = -1;
    int resultRecursive = -1;
    while(t--) {
        int target, n;
        cin>>target>>n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++) {
            cin>>nums[i];
        }
        resultIterative = binarySearchIterative(nums, target);
        resultRecursive = binarySearchRecursive(nums, 0, n - 1, target);
        cout << resultIterative << endl; 
        cout << resultRecursive << endl; 
    }
    return 0;
}