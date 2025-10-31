#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    if(n<2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if(checkPrime(n)) {
        cout << n << " is a Prime number" << endl;
    }
    else {
        cout << n << " is not Prime number" << endl; 
    }
}