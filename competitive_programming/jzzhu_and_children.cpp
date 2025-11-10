#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int most_round = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int turns = (x + m - 1) / m;
        if(turns >= most_round){
            most_round = turns;
            index = i;
        }
    }
    cout << index + 1 << endl;
}