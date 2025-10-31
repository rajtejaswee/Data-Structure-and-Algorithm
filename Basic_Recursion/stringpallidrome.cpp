#include<bits/stdc++.h>
using namespace std;

bool pallindromeString(int i,int n, string s) {
    if(i >= n/2) {
        return true;
    }
    if(s[i] != s[n-i-1]) {
        return false;
    }
    return pallindromeString(i + 1, n, s);
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    bool res = pallindromeString(0, n, s);
    if(res) {
        cout << "Is a Pallindrome String" << endl;
    }
    else {
        cout << "Is not a Pallindrome String" << endl;
    }
    return 0;
}