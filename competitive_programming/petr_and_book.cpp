#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(7);
    for (int i = 0; i < 7;i++){
        cin >> a[i];
    }
     int i = 0;
    while (n > 0) {
        n -= a[i];           
        if (n <= 0) {
            cout << i + 1;   
            return 0;        
        }
        i = (i + 1) % 7;     
    }
    return 0;
}