#include <bits/stdc++.h>
using namespace std;

int main() {
    int press[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> press[i][j];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int total = press[i][j];  
            if (i > 0) total += press[i - 1][j]; 
            if (i < 2) total += press[i + 1][j]; 
            if (j > 0) total += press[i][j - 1]; 
            if (j < 2) total += press[i][j + 1]; 
            if (total % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}
