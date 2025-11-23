#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    int countWays = 0;
    int totalPeople = n + 1; 

    for (int dima = 1; dima <= 5; dima++) {
        int final_pos = (sum + dima) % totalPeople;
        if (final_pos == 0) final_pos = totalPeople; 
        

        if (final_pos != 1) countWays++;  
    }

    cout << countWays << endl;
    return 0;
}
