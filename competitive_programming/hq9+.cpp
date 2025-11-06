#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(ch=='H' || ch=='Q' || ch=='9') {
            flag = true;
            break;
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}