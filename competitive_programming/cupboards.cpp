#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int left_open = 0, right_open = 0;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if(l==1)
            left_open++;
        if(r==1)
            right_open++;
    }

    int left_flip = min(left_open, n - left_open);
    int right_flip = min(right_open, n - right_open);

    cout << left_flip + right_flip << endl;
}
