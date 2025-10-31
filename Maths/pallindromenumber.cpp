#include<bits/stdc++.h>
using namespace std;

bool checkPallindrome(int n) {
    if(n < 0) {
        return false;
    }
    int temp = n;
    int res = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        res = res * 10 + rem;
        temp = temp / 10;
    }
    if(res == n)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;
    if(checkPallindrome(n)) {
        cout << n << " is a Pallindrome";
    }
    else {
        cout << n << " is not a Pallindrome";
    }
}