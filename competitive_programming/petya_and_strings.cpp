#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    bool flag = true;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i] > s2[i]){
            cout << 1 << endl;
            flag = false;
            break;
        }
        else if(s1[i]<s2[i]) {
            cout << -1 << endl;
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << 0 << endl;
    }
}