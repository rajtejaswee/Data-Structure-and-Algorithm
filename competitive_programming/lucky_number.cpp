#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int temp;
    int count = 0;
    while(n) {
        temp = n % 10;
        if(temp == 4 || temp == 7) {
            count++;
        }
        n = n / 10;
    }
    if(count == 4 || count == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}