#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int op = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i-1] == s[i]){
            op=op+1;
        }
    }
    cout << op << endl;
}