#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count5 = 0;
    int count0 = 0;
    for(int i = 0; i < n; i++) {
        int t;
        cin>>t;
        if(t == 5) {
            count5++;
        }
        else {
            count0++;
        }
    }
    if(count0 == 0) {
        cout<<-1<<endl;
        return 0;
    }
    int groups = count5 / 9;
    int usable_fives = groups * 9;
    if(usable_fives == 0) {
        cout<<0;
        return 0;
    }
    for(int i = 0; i < usable_fives; i++) {
        cout<<5;
    }
    for(int i = 0; i < count0; i++) {
        cout<<0;
    }
    cout<<endl;
    return 0;

}