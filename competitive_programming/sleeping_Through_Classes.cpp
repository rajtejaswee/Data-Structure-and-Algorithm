#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int slept_count = 0;
        int sleep_between = 0; 
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                sleep_between = k; 
            } 
            else {
                if (sleep_between > 0) {
                    sleep_between--;
                } 
                else {
                    slept_count++;
                }
            }
        }
        cout << slept_count << endl;
    }
    return 0;
}