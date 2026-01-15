#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) {
        cin>>arr[i];
    }

    int target = arr[k];
    for(int i = k + 1; i <= n; i++) {
        if(arr[i] != target) {
            cout<< -1 <<endl;
            return 0;
        }
    }

    int ops = 0;
    for(int i = k - 1; i >= 1; i--) {
        if(arr[i] != target) {
            ops = i;
            break;
        }
    }
    cout<< ops << endl;
    return 0;
}