#include<bits/stdc++.h>
using namespace std;

void printWithBacktrack(int i, int n){
    if(i>n) {
        return;
    }
    printWithBacktrack(i+1, n);
    cout << i << endl;
}

int main() {
    int n;
    cin >> n;
    printWithBacktrack(1, n);
}