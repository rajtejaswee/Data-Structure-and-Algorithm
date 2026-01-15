#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--) {
        long long s, k, m;
    if (!(cin >> s >> k >> m)) return;

    long long num_flips = m / k;
    long long remainder_time = m % k;
    long long current_top;

    if (num_flips == 0) {
        current_top = s;
        long long final_sand = max(0LL, current_top - m);
        cout << final_sand << "\n";
    } else {
        if (k >= s) {
            current_top = s;
        } else {
            if (num_flips % 2 != 0) {
                current_top = k;
            } else {
                current_top = s;
            }
        }
        
        long long final_sand = max(0LL, current_top - remainder_time);
        cout << final_sand << "\n";
    }
    }
    return 0;
}