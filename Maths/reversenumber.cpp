#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = abs(n);
    int res = 0;
    while(temp!=0) {
        int rem = temp % 10;
        res = res * 10 + rem;
        temp = temp / 10;
    }
    if(n < 0) {
        cout << "Reverse of the number " << n << " is " << res * -1 << endl;
    }
    else {
         cout << "Reverse of the number " << n << " is " << res << endl;
    }
    
}