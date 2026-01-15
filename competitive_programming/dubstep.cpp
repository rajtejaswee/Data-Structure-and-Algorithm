#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool space = false;
    for(int i = 0; i < s.length(); i++) {
        if(i+2 < s.length() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i+=2;
            space = true;
        }
        else {
            if(space) {
            cout<< " ";
            space = false;
        }
        cout<<s[i];
        }
    }
}