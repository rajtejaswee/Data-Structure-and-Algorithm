#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s.length() <= 10) {
            cout << s << endl;
        }
        else{
            char ch1 = s[0];
            char ch2 = s[s.length() - 1];
            string res = "";
            int mid = s.length() - 2;
            res = string(1,ch1) + to_string(mid) + string(1,ch2);
            cout << res << endl;
        }
    }
}