#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count[8] = {0};
    for(int i = 0; i < n; i++) {
        int x; 
        cin>> x;
        count[x]++;
    }

    int count_124 = count[4];
    int count_136 = count[3];
    int count_126 = count[6] - count_136;

    if(count[5] > 0 || count[7] > 0 || count_126 < 0 || count_124 + count_126 != count[2] ||  count_124 + count_126 + count_136 != count[1]) {
        cout << - 1 << endl;
        return 0;
    }
    else {
        for (int i = 0; i < count_124; i++) cout << "1 2 4\n";
        for (int i = 0; i < count_136; i++) cout << "1 3 6\n";
        for (int i = 0; i < count_126; i++) cout << "1 2 6\n";
    }
    return 0;

}