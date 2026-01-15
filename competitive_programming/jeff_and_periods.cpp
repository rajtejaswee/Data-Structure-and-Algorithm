#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    map<int, vector<int>> mpp;

    for(int i = 0; i < n; i++) {
        int x;
        cin>> x;
        mpp[x].push_back(i);
    }

    vector<pair<int, int>> ans;
    for(auto it: mpp) {
        int num = it.first;

        vector<int>& pos = it.second;
        if(pos.size() == 1) {
            ans.push_back({num, 0}); 
        }
        else {
            int diff = pos[1] - pos[0];
            bool ok = true;

            for(int i = 1; i < pos.size(); i++) {
                if(pos[i] - pos[i-1] != diff) {
                    ok = false;
                    break;
                }
            }
            
            if(ok) {
                ans.push_back({num, diff});
            }
        }
    }
    cout << ans.size() << endl;
    
    for(auto p : ans) {
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}
  