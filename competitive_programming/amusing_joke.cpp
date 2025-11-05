#include<bits/stdc++.h>
using namespace std;

int main() {
    string guest;
    string host;
    string pile;
    cin >> guest >> host >> pile;
    string combined = guest + host;
    if(combined.length() != pile.length()) {
        cout << "NO" << endl;
    }
    else {
        sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());
    bool flag = true;
    for (int i = 0; i < combined.length(); i++)
    {
        if(combined[i] != pile[i]) {
            flag = false;
        }
    }
    if(flag) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    }
}