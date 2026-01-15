#include<bits/stdc++.h>
using namespace std;

int calc(int g[5][5], int u, int v) {
    return g[u][v] + g[v][u];
}

int main() {
    int g[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> g[i][j];
        }
    }
    vector<int> p = {0, 1, 2, 3, 4};
    
    long long max_happiness = -1;
    do {
        long long current_happiness = 0;
        current_happiness += calc(g, p[0], p[1]);
        current_happiness += calc(g, p[2], p[3]);
        current_happiness += calc(g, p[1], p[2]);
        current_happiness += calc(g, p[3], p[4]);
        current_happiness += calc(g, p[2], p[3]);
        current_happiness += calc(g, p[3], p[4]);

        if (current_happiness > max_happiness) {
            max_happiness = current_happiness;
        }

    } while (next_permutation(p.begin(), p.end()));

    cout << max_happiness << endl;

    return 0;
}