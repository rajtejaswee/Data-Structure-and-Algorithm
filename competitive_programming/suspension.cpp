#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int y, r;
        cin >> y >> r;
        int res = 0;
        res = r + (y / 2);
        if(res >= n) {
          cout << n << endl;  
        }
        else {
            cout << res << endl;  
        }
    }
}