#include<bits/stdc++.h>
using namespace std;

void printname(int i, int n) {
    if(i>n) {
        return;
    }
    cout << "raj" << endl;
    printname(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    printname(0, 4);
}