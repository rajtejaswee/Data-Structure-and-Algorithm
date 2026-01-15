#include<bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin>>s;
   string target = "hello";
   int j = 0;
   for (int i = 0; i < s.length() && j < target.length(); i++) {
        if (s[i] == target[j]) {
            j++;
        }
   }
   if(j == 5) {
    cout<<"YES"<<endl;
   }
   else {
    cout<<"NO"<<endl;
   }
}