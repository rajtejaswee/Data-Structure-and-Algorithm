#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        long long x;
        cin >> x;

        long long largest = arr[0];
        long long smallest = arr[0];

        for (int i = 0; i < n; i++) {
            if(arr[i]>largest){
                largest = arr[i];
            }
            if(arr[i]<smallest){
                smallest = arr[i];
            }

        }
        if(x>= smallest && x <= largest) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}