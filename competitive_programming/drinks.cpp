#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int lst[n];
    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }
    double percentage = 0.0;
    for (int i = 0; i < n; i++) {
        percentage += (lst[i]  * 1.0 / n);
    }
    cout << fixed << setprecision(12) << percentage << endl;
}