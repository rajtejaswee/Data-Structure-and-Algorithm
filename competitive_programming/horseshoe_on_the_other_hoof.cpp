#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    int res = 4 - st.size();
    cout << res << endl;
}