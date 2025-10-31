#include<bits/stdc++.h>
using namespace std;

void printwithbacktracking(int n) {
    if(n<1){
        return;
    }
    printwithbacktracking(n - 1);
    cout << n << endl;
}

int main() {
    int n;
    cin >> n;
    printwithbacktracking(n);
}