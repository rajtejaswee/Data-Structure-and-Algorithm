#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> mpp;
    //unordered map:
    // unordered_map<char, int>
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    // how to iterate
    for(auto it: mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin>>ch;
        cout << mpp[ch] << endl;
    }
}