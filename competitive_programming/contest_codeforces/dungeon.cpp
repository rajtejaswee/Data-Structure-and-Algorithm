#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while(T--) {
        int n, m;
        cin >> n >> m;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<tuple<long long, long long, int>> monsters(m);
        for(int i = 0; i < m; i++) {
            long long b;
            cin >> b;
            get<0>(monsters[i]) = b;
        }
        
        for(int i = 0; i < m; i++) {
            long long c;
            cin >> c;
            get<1>(monsters[i]) = c;
            get<2>(monsters[i]) = i;
        }
        
        // Sort monsters by life value (ascending)
        sort(monsters.begin(), monsters.end());
        
        // Max heap of available swords
        multiset<long long> swords(a.begin(), a.end());
        
        int killed = 0;
        
        for(auto [life, reward, idx] : monsters) {
            // Find the weakest sword that can kill this monster
            auto it = swords.lower_bound(life);
            
            if(it != swords.end()) {
                long long sword_damage = *it;
                swords.erase(it);
                killed++;
                
                // Add new sword if reward > 0
                if(reward > 0) {
                    swords.insert(max(sword_damage, reward));
                }
            }
        }
        cout << killed << "\n";
    }
    
    return 0;
}