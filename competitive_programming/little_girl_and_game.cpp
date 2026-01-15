#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    map<char,int> mpp;
    for(int i = 0; i < s.length(); i++) {
        mpp[s[i]]++;
    }
    int odd_count = 0;
    for(auto it: mpp) {
        if(it.second % 2 != 0) {
            odd_count++;
        }
    }

    if(odd_count == 0 || odd_count % 2 != 0) {
        cout<<"First" <<endl;
    }
    else {
        cout<<"Second"<<endl;
    }
    return 0;
}