#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (true)
    {
        t++;
        string s = to_string(t);
        set<char> uniqueDigits(s.begin(), s.end());   
        if(s.size() == uniqueDigits.size()) {
            cout << t << endl;
            break;
        }
    }
    return 0;
}