#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    string res = "";
    for (int i = 0; i < s1.size(); i++)
    {
        res += (s1[i] == s2[i]) ? '0' : '1';
    }
    cout << res << endl;
}