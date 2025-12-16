#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n == 0) {
        cout<<"0 0 0"<<endl;
        return 0;
    }
    if(n == 1) {
        cout<<"0 0 1"<<endl;
        return 0;
    }
    if(n == 2) {
        cout <<"0 1 1"<<endl;
        return 0;
    }

    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    int next_fib = 1;
    while(next_fib < n) {
        int length = fib.size();
        next_fib = fib[length - 1] + fib[length - 2];
        fib.push_back(next_fib);
    }

    int i = fib.size() - 1;

    int val1 =  fib[i-1];
    int val2 = fib[i-3];
    int val3 = fib[i-4];

    cout << val1 << " " <<val2<<" "<<val3<<endl;
    return 0;
}