#include<bits/stdc++.h>
using namespace std;

int main(){
    int k; 
    cin>>k;
    string s;
    cin>>s;
    string res="";
    map<char, int> mpp;
    for(int i = 0; i < s.length(); i++) {
        mpp[s[i]]++;
    }
    string base_pattern = "";
    for(auto i : mpp) {
        if(i.second % k != 0) {
            cout<<-1<<endl;
            return 0;
        }
        int count = i.second/k;
        for(int j = 0; j < count; j++) {
            base_pattern+=i.first;
        }
    }
    for(int i = 0; i < k;i++) {
        res+= base_pattern;
    }

    cout << res <<endl;
    return 0;
}