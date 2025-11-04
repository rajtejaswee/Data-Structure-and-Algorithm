#include<bits/stdc++.h>
using namespace std;

int main() {
    // taking inputs
    string s;
    cin >> s;

    int hash[26] = {0};
    //another way for all the character
    //hash[256] = {0}
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
        // for 256 size array, hash[c]
    }
}