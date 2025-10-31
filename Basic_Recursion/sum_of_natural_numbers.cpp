#include<bits/stdc++.h>
using namespace std;

// parameterized way
void sumOfNaturalNumbers(int n, int sum) {
    if(n<1) {
        cout << sum << endl;
        return;
    }
    sumOfNaturalNumbers(n - 1, sum + n);
}

// functional way
int sumofnos(int n) {
    if(n==0) {
        return 0;
    }    
    return n + sumofnos(n - 1);
}

int main() {
    int n;
    cin >> n;
    int sum = 0;
    sumOfNaturalNumbers(n, sum);
    int sum1 = sumofnos(n);
    cout << sum1 << endl;
}
