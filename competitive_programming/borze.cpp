#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string res = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '.') {
            res = res + '0';
        }
        else if(s[i] == '-') {
            if(s[i+1] == '.') {
                res = res + '1';
                i++;
            }
            else {
                res = res + '2';
                i++;
            }
        }
    }
    cout << res << endl;
    return 0;
}