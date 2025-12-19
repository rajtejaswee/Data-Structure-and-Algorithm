#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 1; i < n; i++) {
            string t;
            cin>>t;

            string left_join = t + s;
            string right_join = s+ t;

            if(left_join < right_join) {
                s = left_join;
            }
            else {
                s = right_join;
            }
        }
        cout << s << endl;
    }
    return 0;
}